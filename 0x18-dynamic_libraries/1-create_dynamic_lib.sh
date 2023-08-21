#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
gcc -shared -o liball.so -Wall -Werror -Wextra -pedantic -std=gnu89  *.o
