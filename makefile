# Compiler and flags
CXX = g++
CXXFLAGS = -g -Wall -std=gnu++11
SHELL = /bin/bash

# Target to build
all: main

# Link the main executable
main: main.o loteria.o
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile main.cpp to main.o
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Compile loteria.cpp to loteria.o
loteria.o: loteria.cpp loteria.h
	$(CXX) $(CXXFLAGS) -c $<

# Clean up build files
clean:
	rm -f *.o main

