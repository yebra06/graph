# Programmer: Alfredo Yebra Jr.
# Date: January 2, 2017

# Target executable
TARGET	= graph

# Project files
CFILES	= $(wildcard src/*.cpp)
CFILES	+= $(wildcard tests/*.cpp)
OBJECTS	= $(CFILES:.cpp=.o)

# Compiler settings
CXX		= g++
CFLAGS	= -g -Wall -I include

# Helper macros
RM		= rm -rf $(OBJECTS) $(TARGET)

# Compile project into target executable.
$(TARGET): $(OBJECTS)
	$(CXX) $(CFLAGS) -o $@ $^

# Pattern to create .o files from .cpp files
%.o : %.cpp
	$(CXX) -c $(CFLAGS) $< -o $@

# Clean up objects and executables.
clean:
	$(RM)
