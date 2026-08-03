#!/usr/bin/env bash
coproc echo "Hello, World!"
read -r msg <&"${COPROC[0]}"
echo "$msg"
