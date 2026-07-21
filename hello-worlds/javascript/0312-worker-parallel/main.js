// Mock Web Worker for Node.js syntax check
const workerCode = `self.onmessage = (e) => { self.postMessage("Hello, World!"); };`;
const blob = new Blob([workerCode]);
const worker = new Worker(URL.createObjectURL(blob));
worker.onmessage = (e) => { console.log(e.data); worker.terminate(); };
worker.postMessage("start");
