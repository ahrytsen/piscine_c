#!/bin/sh

FT_NBR1_RAW=$(echo $FT_NBR1 | sed "s/'/0/g" | sed "s/\\\/1/g" | sed "s/\"/2/g" | sed "s/\?/3/g" | sed "s/\!/4/g")
FT_NBR2_RAW=$(echo $FT_NBR2 | sed "s/m/0/g" | sed "s/r/1/g" | sed "s/d/2/g" | sed "s/o/3/g" | sed "s/c/4/g")


FT_NBR1_CORR=$(echo $FT_NBR1_RAW | xargs echo "ibase=5;" | bc)
FT_NBR2_CORR=$(echo $FT_NBR2_RAW | xargs echo "ibase=5;" | bc)

FT_NBR_END=$(echo $(echo $FT_NBR1_CORR"+"$FT_NBR2_CORR | bc) | xargs echo "obase=13;" | bc)

echo $FT_NBR_END | sed "s/0/g/g" | sed "s/1/t/g" | sed "s/2/a/g" | sed "s/3/i/g" | sed "s/4/o/g" | sed "s/5/ /g" | sed "s/6/l/g" | sed "s/7/u/g" | sed "s/8/S/g" | sed "s/9/n/g" | sed "s/A/e/g" | sed "s/B/m/g" | sed "s/C/f/g"