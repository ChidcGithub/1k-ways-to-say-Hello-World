exports.handler = async (event) => {
    return { statusCode: 200, body: "Hello, World!" };
};
// Local verification
console.log(exports.handler(null));
