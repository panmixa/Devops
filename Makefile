# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -g
TARGET = main

# Build rules
all: $(TARGET)

$(TARGET): main.o FuncA.o
    $(CXX) $(CXXFLAGS) -o $(TARGET) main.o FuncA.o

main.o: main.cpp
    $(CXX) $(CXXFLAGS) -c main.cpp

FuncA.o: FuncA.cpp FuncA.h
    $(CXX) $(CXXFLAGS) -c FuncA.cpp

# Clean up
clean:
    rm -f $(TARGET) *.o

