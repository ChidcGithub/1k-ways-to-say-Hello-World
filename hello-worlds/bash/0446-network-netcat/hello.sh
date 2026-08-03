#!/usr/bin/env bash
echo "Hello, World!" | nc -l -p 8080 -q 0 &
sleep 1
nc localhost 8080