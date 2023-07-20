#include <stddef.h>
#ifndef FUNCTIONPOINTERS_H
#define FUNCTIONPOINTERS_H

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void print_with_char(char *name);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
