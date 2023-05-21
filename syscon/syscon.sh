#!/bin/bash
nline=$(awk '/HandleLidSwitch=ignore/ {print NR}' $1)
sed -i "$nline s/#//g" $1
