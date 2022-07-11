#!/usr/bin/env bash
gcc -g -Wall -Werror -Wextra -Wno-format -pedantic -std=gnu89 main.c ../*.c
./a.out
