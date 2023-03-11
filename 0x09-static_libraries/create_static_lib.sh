#!/bin/bash

# Extract object files from  all c files in current directory.
gcc -c *.c

# Create a static library called liball.a from all newly created object files.
ar rcs liball.a *.o
