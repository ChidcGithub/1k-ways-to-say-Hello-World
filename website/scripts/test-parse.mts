import { readdirSync, existsSync, statSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { join } from 'node:path';
import { parseEntry } from '../src/lib/parse.ts';

const REPO_ROOT = fileURLToPath(new URL('../..', import.meta.url));
const worldsRoot = join(REPO_ROOT, 'hello-worlds');

let total = 0;
const all = [];
const missing = { code: 0, runCmd: 0, title: 0 };
const samples = [];

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
		all.push(entry);
		if (!entry.code) missing.code++;
		if (!entry.runCmd) missing.runCmd++;
		if (!entry.title) missing.title++;
		if (samples.length < 3 || ['0001', '0118', '0328', '0394'].includes(entry.id)) {
			samples.push(entry);
		}
	}
}

console.log(`Parsed: ${total}`);
console.log(`Missing code: ${missing.code}, missing runCmd: ${missing.runCmd}, missing title: ${missing.title}`);
const ids = all.map((e) => e.id);
const seen = new Map();
const dups = [];
for (const e of all) {
	if (seen.has(e.id)) dups.push({ id: e.id, a: seen.get(e.id), b: `${e.folderName}` });
	else seen.set(e.id, e.folderName);
}
console.log(`Unique ids: ${seen.size}, total: ${all.length}`);
if (dups.length) {
	console.log('DUPLICATE IDs:');
	for (const d of dups) console.log('  ', d.id, d.a, '<->', d.b);
}
for (const s of samples) {
	console.log('---', s.id, s.language, s.folderName);
	console.log('  title:', s.title, '| file:', s.codeFileName, '| lang:', s.codeLang);
	console.log('  code:', JSON.stringify(s.code.slice(0, 80)));
	console.log('  runCmd:', JSON.stringify(s.runCmd.slice(0, 80)));
}
