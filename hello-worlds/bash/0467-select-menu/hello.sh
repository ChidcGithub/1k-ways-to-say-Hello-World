#!/usr/bin/env bash
PS3="Choose: "
select choice in "Hello, World!" "Goodbye"; do echo "$choice"; break; done
