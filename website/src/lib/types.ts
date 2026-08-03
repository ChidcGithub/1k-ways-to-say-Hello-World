export interface Entry {
	id: string;
	numericId: string;
	language: string;
	paradigm: string;
	output: string;
	platform: string;
	era: string;
	tags: string[];
	notes: string;
	author: string;
	date: string;
	folderName: string;
	path: string;
	title: string;
	code: string;
	codeLang: string;
	codeFileName: string;
	runCmd: string;
}

export type Locale = 'zh' | 'en';

export const ERAS = ['vintage', 'classic', 'modern', 'contemporary'] as const;

export const ERA_LABEL: Record<(typeof ERAS)[number], Record<Locale, string>> = {
	vintage: { zh: '远古 ≤1980', en: 'Vintage ≤1980' },
	classic: { zh: '经典 1981–2000', en: 'Classic 1981–2000' },
	modern: { zh: '现代 2001–2020', en: 'Modern 2001–2020' },
	contemporary: { zh: '当代 2021–', en: 'Contemporary 2021–' },
};
