#!/bin/sh
find . -name "*.sh" -print | sed 's/.sh$//g' | sed 's|^.*/||g'