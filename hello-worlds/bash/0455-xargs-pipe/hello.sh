#!/usr/bin/env bash
echo "Hello, World!" | xargs -I{} echo "{}"
