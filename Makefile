# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
LDFLAGS = 

# Target name
TARGET = main

# Source files
SRCS = main.cpp Recipient.cpp Times.cpp
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Build target
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS) $(LDFLAGS)

# Compile object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target
clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean
