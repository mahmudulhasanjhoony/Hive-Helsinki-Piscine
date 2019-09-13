#!/usr/bin/env bash
find . -name "*.sh" -print | rev | cut -f 2- -d '.' | rev
