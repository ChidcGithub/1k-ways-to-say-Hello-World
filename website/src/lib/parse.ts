import { readdirSync, readFileSync, statSync } from 'node:fs';
import { join } from 'node:path';
import matter from 'gray-matter';
import type { Entry } from './types';

export interface RawFrontMatter {
	id: string | number;
	language: string;
	paradigm: string;
	output: string;
	platform: string;
	era: string;
	tags?: unknown;
	notes?: string;
	author?: string;
	date?: unknown;
}

const FENCED = /```(\w+)?\s*\n([\s\S]*?)```/g;

export function normalizeId(id: string | number): string {
	return String(id).padStart(4, '0');
}

export function normalizeDate(date: unknown): string {
	if (date instanceof Date && !Number.isNaN(date.getTime())) {
		return date.toISOString().slice(0, 10);
	}
	const s = String(date ?? '');
	const m = s.match(/^(\d{4})-(\d{2})-(\d{2})/);
	return m ? m[0] : s;
}

export function extractTitle(body: string): string {
	const m = body.match(/^#\s+#?\d{4}\s*[·．.]?\s*(.*)$/m);
	if (m) return m[1].trim();
	const m2 = body.match(/^#\s+(.*)$/m);
	return m2 ? m2[1].trim() : '';
}

interface CodeBlock {
	lang: string;
	code: string;
}

function fencedBlocks(md: string): CodeBlock[] {
	const out: CodeBlock[] = [];
	for (const m of md.matchAll(FENCED)) {
		out.push({ lang: m[1] ?? '', code: m[2] });
	}
	return out;
}

function sectionAfter(md: string, headerRegex: RegExp): string {
	const m = md.match(headerRegex);
	if (!m || m.index === undefined) return '';
	return md.slice(m.index + m[0].length);
}

export function extractSource(md: string): { code: string; codeLang: string } {
	const inSource = sectionAfter(md, /^#{2,3}\s*(?:Source Code|源代码)/m);
	const blocks = fencedBlocks(inSource || md);
	const prefer = blocks.find((b) => b.lang && b.lang.toLowerCase() !== 'bash' && b.lang.toLowerCase() !== 'sh' && b.lang.toLowerCase() !== 'console' && b.lang.toLowerCase() !== 'shell');
	if (prefer) return { code: prefer.code.replace(/\n$/, ''), codeLang: prefer.lang.toLowerCase() };
	const any = blocks.find((b) => b.code.trim().length > 0);
	if (any) return { code: any.code.replace(/\n$/, ''), codeLang: any.lang.toLowerCase() };
	return { code: '', codeLang: '' };
}

export function extractRunCmd(md: string, canonicalPath: string): string {
	const inRun = sectionAfter(md, /^#{2,3}\s*(?:Run|运行方式|运行)/m);
	const block = fencedBlocks(inRun || md)[0];
	if (!block) return '';
	const lines = block.code
		.split('\n')
		.map((l) => l.replace(/^\$\s*/, ''))
		.filter((l) => l.trim().length > 0 && !l.trim().startsWith('Expected output'))
		.join('\n');
	const cdMatch = lines.match(/^cd\s+[^\n]+/);
	if (cdMatch) {
		return lines.replace(cdMatch[0], `cd ${canonicalPath}`);
	}
	return lines;
}

export function findCodeFile(dir: string, md: string): string {
	const inSource = sectionAfter(md, /^#{2,3}\s*(?:Source Code|源代码)/m);
	const fm = inSource.match(/`([^`\n]+)`\s*:/);
	if (fm) return fm[1];
	try {
		const file = readdirSync(dir).find((f: string) => f !== 'README.md' && statSync(join(dir, f)).isFile());
		return file ?? '';
	} catch {
		return '';
	}
}

export function parseEntry(lang: string, folderName: string, readmePath: string, dir: string): Entry | null {
	const md = readFileSync(readmePath, 'utf8');
	const { data, content } = matter(md) as unknown as { data: RawFrontMatter; content: string };
	if (!data.id || !data.language) return null;
	const tags = Array.isArray(data.tags) ? data.tags.map((t) => String(t)) : [];
	const { code, codeLang } = extractSource(content);
	const nid = folderName.slice(0, 4);
	const relPath = join('hello-worlds', lang, folderName).replaceAll('\\', '/');
	return {
		id: `${lang}-${nid}`,
		numericId: nid,
		language: data.language,
		paradigm: data.paradigm,
		output: data.output,
		platform: data.platform,
		era: data.era,
		tags,
		notes: data.notes ?? '',
		author: data.author ?? 'unknown',
		date: normalizeDate(data.date),
		folderName,
		path: relPath,
		title: extractTitle(content),
		code,
		codeLang,
		codeFileName: findCodeFile(dir, content),
		runCmd: extractRunCmd(content, relPath),
	};
}
