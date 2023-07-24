ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "unistd.h"
/**
 *struct func - A custom data structure to represent
 *a function and its associated character.
 *
 *@ch: A character representing the format specifier.
 *@f: A pointer to a function that operates.
 *
 *The "func" struct is a custom data type designed to store
 *information about a function and its associated character.
 *It consists of two members: ch and f.
 *
 */
typedef struct func
{
	char *ch;
	int (*f)(va_list);
} func;

int _printf(const char *format, ...);
int check(const char *, va_list);
int _putchar(char);
int print_char(va_list);
int print_int(va_list);
int print_string(va_list);
int print_per(va_list);
int rot13(va_list);
int rev_string(va_list);
void print_num(long int);

#endif
