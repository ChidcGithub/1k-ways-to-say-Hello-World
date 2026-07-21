// Mock React.createElement for syntax check
const React = { createElement: (tag, props, ...children) => ({ tag, props, children }) };
const h = React.createElement;
const Greeting = () => h("h1", null, "Hello, World!");
const result = Greeting();
console.log("React component would render:", result.children[0]);
