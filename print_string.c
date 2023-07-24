#include "main.h"

/**
 *print_string - function print strings
 *@args: string
 *
 *Return: Lenght
 */

int print_string(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
	}

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
