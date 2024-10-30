# Compiler and flags
CC     = gcc
CFLAGS = -Wall -g

EXECUTABLE := power_utility

BUILD_DIR := ./build
SRC_DIR   := ./src

# Find all *.c source files
SRCS := $(wildcard $(SRC_DIR)/*.c)
# Find all *.o object files
OBJS := $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))

# Create build directory if it doesn't exist
.PHONY: all clean

all: $(BUILD_DIR) $(BUILD_DIR)/$(EXECUTABLE)

$(BUILD_DIR):
	mkdir -p $@

$(BUILD_DIR)/$(EXECUTABLE): $(OBJS)
	gcc $(CFLAGS) $(OBJS) -o $@ $(LDFLAGS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)/*.o $(BUILD_DIR)/$(EXECUTABLE)