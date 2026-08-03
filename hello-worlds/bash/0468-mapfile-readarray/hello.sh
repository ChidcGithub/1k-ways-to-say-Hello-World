#!/usr/bin/env bash
echo "Hello, World!" | { mapfile -t lines; printf '%s\n' "${lines[@]}"; }
