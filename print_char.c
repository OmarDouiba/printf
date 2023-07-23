#include "main.h"

/**
 *print_char - Function to print a single character.
 *@a:  A va_list containing the arguments
 *needed for the function.
 *
 *Return: Integer, representing the number
 *of characters printed (1 in this case).
 */
int print_char(va_list a)
{
	char c = va_arg(a, int);

	return (_putchar(c));
}
