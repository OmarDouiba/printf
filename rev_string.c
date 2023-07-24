#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: Lenght.
*/
int rev_string(va_list s)
{
	char tmp;
	int i, len, len1;

	char *str = va_arg(s, char *);

	len = 0;
	len1 = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = str[i];
		str[i] = str[len1];
		str[len1--] = tmp;
	}
	for (i = 0; i < len; i++)
		_putchar(str[i]);
	return (len);
}
