#!/bin/sh
exec groups ${FT_USER} | tr ' ' ',' | tr -d '\n'