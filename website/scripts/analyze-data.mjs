import { existsSync, readdirSync, readFileSync, statSync } from 'node:fs';
import { join, resolve } from 'node:path';
import matter from 'gray-matter';

const REPO_ROOT = resolve(import.meta.dirname, '..', '..');
const LANGS = readdirSync(join(REPO_ROOT, 'hello-worlds'), { withFileTypes: true })
  .filter((d) => d.isDirectory())
  .map((d) => d.name);

const entries = [];
const problems = [];

for (const lang of LANGS) {
  const langDir = join(REPO_ROOT, 'hello-worlds', lang);
  for (const folder of readdirSync(langDir, { withFileTypes: true })) {
    if (!folder.isDirectory() || !/^\d{4}-/.test(folder.name)) continue;
    const readmePath = join(langDir, folder.name, 'README.md');
    if (!existsSync(readmePath) || !statSync(readmePath).isFile()) continue;
    let fm;
    try {
      const { data } = matter(readFileSync(readmePath, 'utf8'));
      fm = data;
    } catch {
      problems.push({ id: folder.name, issue: 'front-matter parse error' });
      continue;
    }
    if (!fm.id) {
      problems.push({ id: folder.name, issue: 'missing id' });
      continue;
    }
    entries.push({ folderName: folder.name, lang, ...fm });
  }
}

console.log(`Parsed entries with front matter: ${entries.length}`);
console.log(`Problems: ${problems.length}`);
for (const p of problems) console.log('  ', p.id, p.issue);

const byDim = (k) => {
  const m = new Map();
  for (const e of entries) m.set(String(e[k]), (m.get(String(e[k])) || 0) + 1);
  return [...m.entries()].sort((a, b) => b[1] - a[1]);
};

for (const dim of ['language', 'paradigm', 'output', 'platform', 'era']) {
  console.log(`\n== ${dim} ==`);
  for (const [v, c] of byDim(dim)) console.log(`  ${String(v).padEnd(24)} ${c}`);
}

console.log('\n== id value types ==');
const idTypes = new Map();
for (const e of entries) idTypes.set(typeof e.id, (idTypes.get(typeof e.id) || 0) + 1);
console.log(idTypes);

console.log('\n== tag values ==');
const tags = new Set();
for (const e of entries) for (const t of (e.tags || [])) tags.add(String(t));
console.log([...tags].sort().join(', '));

console.log('\n== authors ==');
const authors = new Set(entries.map((e) => String(e.author)));
console.log(authors.size, 'unique:', [...authors].join(', '));

console.log('\n== dates ==');
const dates = new Set(entries.map((e) => String(e.date)));
console.log([...dates].sort().join(', '));

console.log('\n== id range ==');
const ids = entries.map((e) => String(e.id));
console.log('min:', Math.min(...ids.map(Number)), 'max:', Math.max(...ids.map(Number)), 'unique:', new Set(ids).size);

const dupIds = ids.filter((id, i) => ids.indexOf(id) !== i);
console.log('duplicate ids:', [...new Set(dupIds)].join(', '));
