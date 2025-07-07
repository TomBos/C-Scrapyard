#!/usr/bin/env bash

if [[ -n "$2" ]];then
	filename="$2"	
else
	filename="${1%.c}.bin"
fi

gcc "$1" -o "$filename"

if [[ ! -x "$filename" ]];then
	sudo chmod +x "$filename"
fi

echo "  $filename compiled successfully, build ready."

