#!/bin/sh
exec cat /etc/passwd | sed "/^#/d" | cut -d ":" -f 1 | sed -n 'n;p' | rev | sort -r -f | sed -n "${FT_LINE1},${FT_LINE2}p" | tr "\n" "," | sed 's/.$/./' | sed 's/,/, /g' | tr -d "\n"