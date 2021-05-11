# EduDL-public-pipe

This is the default, cleaned implementation for a final project for SDS374C Spring 2021. All of code was taken
from Viktor Eijkhout(https://github.com/VictorEijkhout/EduDL-public/tree/main/src). Please
refer to that project's READMEs as well. This is meant as a tool to check baseline, unoptimized performances of the other
two implementations.

## Compiling

Simply navigate to /src and run:

    make test

This will compile all files to the ./test_mnist executible

## Running Code

Run:

    ./test_mnist -h 

for a list of command line arguments to run the pipelined model on. 
The only necessary argument is given by the `-d` flag, for which one must specify
the mnist directory location.