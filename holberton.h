#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct st - Function that prints the structure.
 * @s: pointer that points to a string
 * @f: pointer that point to a structure
**/

typedef struct st
{
	char *s;
	int (*f)(va_list);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_numbers(int i);
int print_char(va_list valist);
int print_string(va_list valist);
int print_decimals(va_list valist);
int print_int(va_list valist);
int (*get_func(char s))(va_list valist);
int print_binary(va_list valist);
int print_r(va_list valist);
int print_rev(char *s);
#endif
