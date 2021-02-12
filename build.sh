#!/usr/bin/env bash
gcc main.c -lm -o test-nodownlevel
gcc main.c -lm -include force_link_glibc_2.23.h -o test-downlevel
