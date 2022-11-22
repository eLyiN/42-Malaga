#!/bin/bash
if [[ -z $1 ]]
then
	echo "No argumments supplied"
else
for i in "$@"; do
	mkdir -p -- "ex$i"
done
fi