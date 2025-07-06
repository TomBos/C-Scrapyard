#!/usr/bin/env bash

if [[ -n "$2" ]];then
	gcc "$1" -o "$2"
	sudo chmod +x "$2"
else
	filename="${1%.c}.bin"
	gcc "$1" -o "$filename"
	sudo chmod +x "$filename"
fi

