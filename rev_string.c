#include "main.h"

/**
 *rev_string - reverses a string
 *@s: string.
 *
 *Return: Lenght.
 */
int rev_string(va_list s)
{
	int i, len = 0;

	char *str = va_arg(s, char *);

	while (str[len] != '\0')
	{
		len++;
	}

	i = len;
	while (len >= 0)
	{
		_putchar(str[len]);
		len--;
	}

	return (i);
}
