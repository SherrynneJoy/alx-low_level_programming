#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
