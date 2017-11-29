#!bin/sh
exec ldapsearch -Q "uid=z*" | grep "^cn:" | sort -r -f