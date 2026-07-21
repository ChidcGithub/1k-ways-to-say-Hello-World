async function getGreeting() { return "Hello, World!"; }
(async () => { console.log(await getGreeting()); })();
