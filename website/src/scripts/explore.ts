export function initExplore() {
	const q = document.getElementById('q') as HTMLInputElement;
	const selects = {
		language: document.getElementById('f-language') as HTMLSelectElement,
		paradigm: document.getElementById('f-paradigm') as HTMLSelectElement,
		output: document.getElementById('f-output') as HTMLSelectElement,
		platform: document.getElementById('f-platform') as HTMLSelectElement,
		era: document.getElementById('f-era') as HTMLSelectElement,
	};
	const tagBtns = [...document.querySelectorAll<HTMLButtonElement>('.tag-chip')];
	const groups = [...document.querySelectorAll<HTMLElement>('.lang-group')];
	const cards = [...document.querySelectorAll<HTMLElement>('.entry-card')];
	const countEl = document.getElementById('result-count') as HTMLElement;
	const noResults = document.getElementById('no-results') as HTMLElement;
	const btnClear = document.getElementById('btn-clear') as HTMLButtonElement;
	const btnGroup = document.getElementById('btn-group') as HTMLButtonElement;
	const resultsLabel = countEl.dataset.resultsLabel ?? '';
	const groupedLabel = btnGroup.dataset.labelGrouped ?? '';
	const flatLabel = btnGroup.dataset.labelFlat ?? '';

	const params = new URLSearchParams(location.search);
	const state = {
		q: params.get('q') ?? '',
		language: params.get('language') ?? '',
		paradigm: params.get('paradigm') ?? '',
		output: params.get('output') ?? '',
		platform: params.get('platform') ?? '',
		era: params.get('era') ?? '',
		tags: (params.get('tags') ?? '').split(',').filter(Boolean),
		grouped: params.get('grouped') === '1',
	};

	q.value = state.q;
	selects.language.value = state.language;
	selects.paradigm.value = state.paradigm;
	selects.output.value = state.output;
	selects.platform.value = state.platform;
	selects.era.value = state.era;
	for (const b of tagBtns) b.classList.toggle('active', state.tags.includes(b.dataset.tag!));
	btnClear.hidden = false;
	btnGroup.textContent = state.grouped ? flatLabel : groupedLabel;
	if (!state.grouped) flatten();

	function syncUrl() {
		const p = new URLSearchParams();
		if (state.q) p.set('q', state.q);
		for (const k of ['language', 'paradigm', 'output', 'platform', 'era'] as const)
			if (state[k]) p.set(k, state[k]);
		if (state.tags.length) p.set('tags', state.tags.join(','));
		if (state.grouped) p.set('grouped', '1');
		const qs = p.toString();
		history.replaceState(null, '', qs ? `?${qs}` : location.pathname);
	}

	function apply() {
		let visible = 0;
		for (const card of cards) {
			const match =
				(!state.language || card.dataset.lang === state.language) &&
				(!state.paradigm || card.dataset.paradigm === state.paradigm) &&
				(!state.output || card.dataset.output === state.output) &&
				(!state.platform || card.dataset.platform === state.platform) &&
				(!state.era || card.dataset.era === state.era) &&
				state.tags.every((t) => (card.dataset.tags ?? '').split(',').includes(t)) &&
				(!state.q || (card.dataset.search ?? '').includes(state.q.toLowerCase()));
			card.hidden = !match;
			if (match) visible++;
		}
		for (const g of groups) {
			const any = [...g.querySelectorAll<HTMLElement>('.entry-card')].some((c) => !c.hidden);
			g.hidden = !any;
		}
		countEl.textContent = `${visible} ${resultsLabel}`;
		noResults.hidden = visible > 0;
		syncUrl();
	}

	function flatten() {
		const list = document.getElementById('entry-list')!;
		const flat = document.createElement('div');
		flat.className = 'lang-group';
		const grid = document.createElement('div');
		grid.className = 'entry-grid';
		for (const c of cards) grid.appendChild(c);
		flat.appendChild(grid);
		list.replaceChildren(flat);
		groups.length = 0;
		groups.push(flat);
	}

	q.addEventListener('input', () => {
		state.q = q.value;
		apply();
	});
	for (const k of Object.keys(selects) as Array<keyof typeof selects>) {
		selects[k].addEventListener('change', () => {
			state[k] = selects[k].value;
			apply();
		});
	}
	for (const b of tagBtns) {
		b.addEventListener('click', () => {
			const t = b.dataset.tag!;
			b.classList.toggle('active');
			if (b.classList.contains('active')) state.tags.push(t);
			else state.tags = state.tags.filter((x) => x !== t);
			apply();
		});
	}
	btnClear.addEventListener('click', () => {
		state.q = '';
		state.language = state.paradigm = state.output = state.platform = state.era = '';
		state.tags = [];
		q.value = '';
		for (const k of Object.keys(selects) as Array<keyof typeof selects>) selects[k].value = '';
		for (const b of tagBtns) b.classList.remove('active');
		apply();
	});
	btnGroup.addEventListener('click', () => {
		state.grouped = !state.grouped;
		syncUrl();
		location.reload();
	});

	apply();
}
