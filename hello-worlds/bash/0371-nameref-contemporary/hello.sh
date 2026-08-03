#!/usr/bin/env bash
greeting="Hello, World!"
declare -n ref=greeting
echo "$ref"
