#!/usr/bin/env bash
trap 'echo "Hello, World!"' USR1
kill -USR1 $$
