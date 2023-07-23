#include "main.h"

/**
 * print_string - Prints a string to the standard output.
 *
 *@str: A va_list containing the arguments
 *needed for the function.
 *
 *Return: lenght of string.
 */

int print_string(va_list str)
{
	int i = 0;
	char *s = va_arg(str, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
