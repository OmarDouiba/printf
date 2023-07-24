#include "main.h"
/**
*rot13 - encodes a string using rot13
*@arg: function parameter
*
*Return: Lenght.
*/
int rot13(va_list arg)
{
	int i = 0, j;
	char re[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char wi[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		j = 0;
		while (re[j] != '\0')
		{
			if (str[i] == re[j])
			{
				str[i] = wi[j];
				_putchar(str[i]);
				break;
			}
			if (!re[j])
				_putchar(str[i]);
			j++;
		}
		i++;
	}
	return (i);
}
