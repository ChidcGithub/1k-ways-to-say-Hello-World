---
id: 0145
language: java
paradigm: procedural
output: stdout
platform: cloud
era: contemporary
tags: []
notes: "AWS Lambda handler style; simulates a serverless function returning the greeting."
author: ChidcGithub
date: 2026-07-20
---

# #0145 · Java Cloud Lambda

## Description

An AWS Lambda style Hello World. The `handleRequest(Object)` method is the Lambda entry point — on a real Lambda runtime the platform would invoke it via reflection (or via the `RequestStreamHandler` interface) and serialize the returned `String` into the HTTP response body. The `main` method is included only so the handler can be exercised locally: it constructs the handler, invokes `handleRequest(null)`, and prints the returned greeting to standard output. The logical platform is the cloud (serverless function), not a long-running server.

## Source Code

`Main.java`:

```java
public class Main {
    // AWS Lambda invokes this method via RequestStreamHandler / POJO handler
    // reflection. The platform serializes the returned String into the
    // Lambda response body.
    public String handleRequest(Object input) {
        return "Hello, World!";
    }

    public static void main(String[] args) {
        Main h = new Main();
        System.out.println(h.handleRequest(null));
    }
}
```

## Run

Local verification:

```bash
cd hello-worlds/java/0145-cloud-lambda
javac Main.java
java Main
```

To deploy on AWS Lambda, package the compiled `Main.class` into a ZIP (or build a fat JAR with `aws-lambda-java-core`), create a function with handler `Main::handleRequest`, and invoke it from the AWS console or CLI.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK 11+, AWS Lambda Java runtime) |
| paradigm | `procedural` | Single handler method returning a string |
| output | `stdout` | Local verification prints to stdout (Lambda response body on the cloud) |
| platform | `cloud` | Designed for AWS Lambda serverless invocation |
| era | `contemporary` | AWS Lambda Java custom runtime era (2021+) |
| tags | `[]` | No special technique tag |

## Reference

- [AWS Lambda Developer Guide — Java handler](https://docs.aws.amazon.com/lambda/latest/dg/java-handler.html)
- `com.amazonaws.services.lambda.runtime.RequestHandler` interface.
