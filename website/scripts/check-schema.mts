import { readdirSync, existsSync, statSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { join } from 'node:path';
import { parseEntry } from '../src/lib/parse.ts';
import { z } from 'zod';

const REPO_ROOT = fileURLToPath(new URL('../..', import.meta.url));
const worldsRoot = join(REPO_ROOT, 'hello-worlds');

const PARADIGMS = ['procedural', 'oop', 'functional', 'logic', 'declarative', 'concatenative', 'array', 'reactive', 'generic', 'meta', 'concurrent', 'esoteric'] as const;
const OUTPUTS = ['stdout', 'stderr', 'gui', 'web', 'audio', 'ascii-art', 'image', 'led', 'serial', 'network', 'file'] as const;
const PLATFORMS = ['cli', 'browser', 'mobile', 'embedded', 'cloud', 'desktop-gui', 'mainframe', 'wasm', 'bare-metal'] as const;
const ERAS = ['vintage', 'classic', 'modern', 'contemporary'] as const;
const TAGS = ['one-liner', 'code-golf', 'obfuscated', 'quine', 'ascii-art', 'polyglot', 'self-hosted', 'parallel', 'distributed', 'shader', 'ai-generated', 'hand-assembled'] as const;

const schema = z.object({
	id: z.string().regex(/^\d{4}$/),
	language: z.string(),
	paradigm: z.enum(PARADIGMS),
	output: z.enum(OUTPUTS),
	platform: z.enum(PLATFORMS),
	era: z.enum(ERAS),
	tags: z.array(z.enum(TAGS)),
	notes: z.string(),
	author: z.string(),
	date: z.string(),
	folderName: z.string(),
	path: z.string(),
	title: z.string(),
	code: z.string(),
	codeLang: z.string(),
	codeFileName: z.string(),
	runCmd: z.string(),
});

let total = 0;
let failed = 0;
for (const lang of readdirSync(worldsRoot, { withFileTypes: true })) {
	if (!lang.isDirectory()) continue;
	const langDir = join(worldsRoot, lang.name);
	for (const folder of readdirSync(langDir, { withFileTypes: true })) {
		if (!folder.isDirectory() || !/^\d{4}-/.test(folder.name)) continue;
		const readmePath = join(langDir, folder.name, 'README.md');
		if (!existsSync(readmePath) || !statSync(readmePath).isFile()) continue;
		const entry = parseEntry(lang.name, folder.name, readmePath, join(langDir, folder.name));
		if (!entry) continue;
		total++;
		const res = schema.safeParse(entry);
		if (!res.success) {
			failed++;
			console.log(`FAIL ${entry.id} ${entry.language} ${entry.folderName}`);
			for (const issue of res.error.issues) {
				console.log(`   ${issue.path.join('.')}: ${issue.message}`);
			}
		}
	}
}
console.log(`\nTotal: ${total}, schema-failed: ${failed}, valid: ${total - failed}`);
