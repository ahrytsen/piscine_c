#!/bin/sh
bomb_time="$(stat -f %a bomb.txt)";
echo $(expr ${bomb_time} - 1);