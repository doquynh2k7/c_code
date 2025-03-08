# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -g

# Target executable
# TARGET = pointer_var
# TARGET = void_ptr
TARGET = struct_ptr

# Source files
# SRCS = pointer_var.c 
# SRCS = void_ptr.c
SRCS = struct_ptr.c

# Object files
OBJS = $(SRCS:.c=.o)

# Default rule (compiles the program)
all: $(TARGET) exec

# Linking
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compiling source files to object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

exec:
	./$(TARGET)

# Clean build files
clean:
	rm -f $(TARGET) $(OBJS)
	rm -f *.o
