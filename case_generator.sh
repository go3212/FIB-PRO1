#!/bin/bash

inputs=1
go=true

for entry in *inp
do
	let "++inputs"
done

echo $inputs

while $go
do
	sname="sample-${inputs}.inp"
	cname="sample-${inputs}.cor"
	printf "${sname}: "
	read sample && touch $sname && echo $sample >> $sname;

	printf "${cname}: "
	read sample && touch $cname && echo $sample >> $cname;

	printf "Contiune? (*/N): "
	read sample

	if [[ $sample == "N" ]]
	then
		go=false
	fi
	
	let "++inputs"
done
