USE_BLIS=0
BLIS_INC_DIR=/Users/eijkhout/Installation/blis/installation-git/include
BLIS_LIB_DIR=/Users/eijkhout/Installation/blis/installation-git/lib

USE_GSL=1
GSL_INC_DIR=../gsl-lite/include

CXX = clang++ -g -std=c++17 -fopenmp
CXXOPTS = ${HOME}/SDS374C/finalproject/cxxopts

DEBUG = 0