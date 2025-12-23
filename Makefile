# GOAL: g++ -o test_mathprint_constants.cpp -I../utilities/

# Variables
CXX = g++
CXX_FLAGS = -Wall -Wextra -g -I./day1 
TARGET = main
SRCS = $(wildcard src/*.cpp)
OBJS = $(SRCS:src/%.cpp=builds/%.o)
BUILD_DIR = builds
APP_DIR = $(BUILD_DIR)/apps
	
# Default target
all: $(APP_DIR)/$(TARGET)

# Create executable from object files
$(APP_DIR)/$(TARGET): $(OBJS) | $(APP_DIR)
		$(CXX) $(CXX_FLAGS) -o $(TARGET) $(OBJS)

# Create object files from source files
$(BUILD_DIR)/%.o: src/%.cpp | $(BUILD_DIR)
		$(CXX) $(CXXFLAGS) -c $< -o $@

# Create directories if they don't exist
$(BUILD_DIR): 
		mkdir -p $(BUILD_DIR)

$(APP_DIR):
		mkdir -p $(APP_DIR)

# Phony targets?
.PHONY: all clean

clean:
		rm -rf $(BUILD_DIR) *.o