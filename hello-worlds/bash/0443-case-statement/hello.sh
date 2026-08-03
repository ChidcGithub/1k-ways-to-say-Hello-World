#!/usr/bin/env bash
target="hello"
case "$target" in
  hello) echo "Hello, World!" ;;
  *) echo "?" ;;
esac