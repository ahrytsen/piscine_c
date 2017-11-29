#!/bin/sh

exec find . -name "*.sh" -exec basename {} \; | rev | cut -c 4- | rev