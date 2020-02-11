CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: test

clean:
	rm test.o functions_to_implement.o test

test: test.cpp functions_to_implement.o
	$(CXX) $(CXXFLAGS) test.cpp functions_to_implement.o -o test

functions_to_implement.o: functions_to_implement.o
	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp
