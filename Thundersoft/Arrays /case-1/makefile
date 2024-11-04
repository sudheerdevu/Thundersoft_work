# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -g

# Target executable
TARGET = sudheer

# Source files
SRCS = main.cpp Sorting.cpp

# Object files (replace .cpp with .o)
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJS)
	@$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to compile each .cpp file into .o
%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up generated files
clean:
	@rm -f $(OBJS) $(TARGET)