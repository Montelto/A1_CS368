CXX = g++
CXXFLAGS = -Wall

all: build

MathLib.o: MathLib.cpp MathLib.h
	$(CXX) $(CXXFLAGS) -o MathLib.o MathLib.cpp

clean:
	-rm Mathlib.o
	-rm Math_Demo

build: demo.cpp MathLib.o
	$(CXX) $(CXXFLAGS) -o Math_Demo demo.cpp MathLib.o
