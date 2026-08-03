import type { Locale } from '../lib/types';

export const PARADIGM_LABEL: Record<string, Record<Locale, string>> = {
	procedural: { zh: '过程式', en: 'Procedural' },
	oop: { zh: '面向对象', en: 'OOP' },
	functional: { zh: '函数式', en: 'Functional' },
	logic: { zh: '逻辑式', en: 'Logic' },
	declarative: { zh: '声明式', en: 'Declarative' },
	concatenative: { zh: '连接式', en: 'Concatenative' },
	array: { zh: '数组式', en: 'Array' },
	reactive: { zh: '响应式', en: 'Reactive' },
	generic: { zh: '泛型', en: 'Generic' },
	meta: { zh: '元编程', en: 'Meta' },
	concurrent: { zh: '并发', en: 'Concurrent' },
	esoteric: { zh: '玩具语言', en: 'Esoteric' },
};

export const OUTPUT_LABEL: Record<string, Record<Locale, string>> = {
	stdout: { zh: '标准输出', en: 'stdout' },
	stderr: { zh: '标准错误', en: 'stderr' },
	gui: { zh: '图形界面', en: 'GUI' },
	web: { zh: '网页', en: 'Web' },
	audio: { zh: '音频', en: 'Audio' },
	'ascii-art': { zh: 'ASCII 艺术', en: 'ASCII art' },
	image: { zh: '图像', en: 'Image' },
	led: { zh: 'LED', en: 'LED' },
	serial: { zh: '串口', en: 'Serial' },
	network: { zh: '网络', en: 'Network' },
	file: { zh: '文件', en: 'File' },
};

export const PLATFORM_LABEL: Record<string, Record<Locale, string>> = {
	cli: { zh: '命令行', en: 'CLI' },
	browser: { zh: '浏览器', en: 'Browser' },
	mobile: { zh: '移动端', en: 'Mobile' },
	embedded: { zh: '嵌入式', en: 'Embedded' },
	cloud: { zh: '云端', en: 'Cloud' },
	'desktop-gui': { zh: '桌面应用', en: 'Desktop GUI' },
	mainframe: { zh: '大型机', en: 'Mainframe' },
	wasm: { zh: 'WebAssembly', en: 'WebAssembly' },
	'bare-metal': { zh: '裸机', en: 'Bare metal' },
};

export const ERA_LABEL: Record<string, Record<Locale, string>> = {
	vintage: { zh: '远古 ≤1980', en: 'Vintage ≤1980' },
	classic: { zh: '经典 1981–2000', en: 'Classic 1981–2000' },
	modern: { zh: '现代 2001–2020', en: 'Modern 2001–2020' },
	contemporary: { zh: '当代 2021–', en: 'Contemporary 2021–' },
};

export const TAG_LABEL: Record<string, Record<Locale, string>> = {
	'one-liner': { zh: '单行', en: 'One-liner' },
	'code-golf': { zh: '代码高尔夫', en: 'Code golf' },
	obfuscated: { zh: '混淆', en: 'Obfuscated' },
	quine: { zh: '自产生', en: 'Quine' },
	'ascii-art': { zh: 'ASCII 艺术', en: 'ASCII art' },
	polyglot: { zh: '多语言', en: 'Polyglot' },
	'self-hosted': { zh: '自举', en: 'Self-hosted' },
	parallel: { zh: '并行', en: 'Parallel' },
	distributed: { zh: '分布式', en: 'Distributed' },
	shader: { zh: '着色器', en: 'Shader' },
	'ai-generated': { zh: 'AI 生成', en: 'AI-generated' },
	'hand-assembled': { zh: '手写汇编', en: 'Hand-assembled' },
};

export const LANGUAGE_LABEL: Record<string, Record<Locale, string>> = {
	python: { zh: 'Python', en: 'Python' },
	cpp: { zh: 'C++', en: 'C++' },
	c: { zh: 'C', en: 'C' },
	java: { zh: 'Java', en: 'Java' },
	rust: { zh: 'Rust', en: 'Rust' },
	javascript: { zh: 'JavaScript', en: 'JavaScript' },
	haskell: { zh: 'Haskell', en: 'Haskell' },
	brainfuck: { zh: 'Brainfuck', en: 'Brainfuck' },
	bash: { zh: 'Bash', en: 'Bash' },
};

export function dimLabel(dim: 'paradigm' | 'output' | 'platform' | 'era' | 'tags', value: string, locale: Locale): string {
	if (dim === 'tags') return TAG_LABEL[value]?.[locale] ?? value;
	if (dim === 'paradigm') return PARADIGM_LABEL[value]?.[locale] ?? value;
	if (dim === 'output') return OUTPUT_LABEL[value]?.[locale] ?? value;
	if (dim === 'platform') return PLATFORM_LABEL[value]?.[locale] ?? value;
	return ERA_LABEL[value]?.[locale] ?? value;
}
