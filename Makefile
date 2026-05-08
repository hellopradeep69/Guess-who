CC = gcc
CFLAGS = -Wall -Wextra
LDLIBS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

SOURCE = src/main.cpp
TARGET = main

.PHONY: default clean run

default: run

compile: src/main.cpp
	$(CC) $(CFLAGS) $(SOURCE) -o $(TARGET) $(LDLIBS)

run: compile
	./$(TARGET)

clean:
	rm ./$(TARGET)

