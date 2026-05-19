# Makefile for C Data Structures Practice

CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g

# 包含路径
INCLUDE = -I./include

all: test_linked_list

test_linked_list: tests/test_linked_list.c src/linked_list.c
	$(CC) $(CFLAGS) $(INCLUDE) -o tests/test_linked_list tests/test_linked_list.c src/linked_list.c

clean:
	rm -f tests/test_linked_list

.PHONY: all clean
