#!/bin/sh

exec expr "$(find . -type f | wc -l | tr -d ' ')" + "$(find . -type d | wc -l | tr -d ' ')"