# Sample makefile for compiling debugging.cpp

CXX ?= g++
CXXFLAGS ?= -Wall -Werror -pedantic -g --std=c++17 -Wno-sign-compare -Wno-comment

# Compile the debugging executable
debugging.exe: debugging.cpp
	$(CXX) $(CXXFLAGS) debugging.cpp -o debugging.exe

# Remove automatically generated files
clean:
	rm -rvf *.exe *~ *.out *.dSYM *.stackdump

# Disable built-in rules
.SUFFIXES:
