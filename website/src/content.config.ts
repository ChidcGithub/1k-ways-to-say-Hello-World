import { defineCollection } from 'astro:content';
import { z } from 'zod';
import { readdirSync, existsSync, statSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { join } from 'node:path';
import { parseEntry } from './lib/parse';
import type { Entry } from './lib/types';

const REPO_ROOT = fileURLToPath(new URL('../..', import.meta.url));

const PARADIGMS = ['procedural', 'oop', 'functional', 'logic', 'declarative', 'concatenative', 'array', 'reactive', 'generic', 'meta', 'concurrent', 'esoteric'] as const;
const OUTPUTS = ['stdout', 'stderr', 'gui', 'web', 'audio', 'ascii-art', 'image', 'led', 'serial', 'network', 'file'] as const;
const PLATFORMS = ['cli', 'browser', 'mobile', 'embedded', 'cloud', 'desktop-gui', 'mainframe', 'wasm', 'bare-metal'] as const;
const ERAS = ['vintage', 'classic', 'modern', 'contemporary'] as const;
const TAGS = ['one-liner', 'code-golf', 'obfuscated', 'quine', 'ascii-art', 'polyglot', 'self-hosted', 'parallel', 'distributed', 'shader', 'ai-generated', 'hand-assembled'] as const;

export const collections = {
	entries: defineCollection({
		schema: z.object({
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
		}),
		async loader() {
			const worldsRoot = join(REPO_ROOT, 'hello-worlds');
			const out: Entry[] = [];
			for (const lang of readdirSync(worldsRoot, { withFileTypes: true })) {
				if (!lang.isDirectory()) continue;
				const langDir = join(worldsRoot, lang.name);
				for (const folder of readdirSync(langDir, { withFileTypes: true })) {
					if (!folder.isDirectory() || !/^\d{4}-/.test(folder.name)) continue;
					const readmePath = join(langDir, folder.name, 'README.md');
					if (!existsSync(readmePath) || !statSync(readmePath).isFile()) continue;
					const entry = parseEntry(lang.name, folder.name, readmePath, join(langDir, folder.name));
					if (entry) out.push(entry);
				}
			}
			return out;
		},
	}),
};
