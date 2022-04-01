#!/bin/bash
gcc -c -Wall -Werror -Wexra *.c
ar -rc -liball.a *.o
ranlib liball.a
