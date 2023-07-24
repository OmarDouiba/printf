#include "main.h"
/**
*check - checker the string and the placeholders
*@format: function parameter
*@args: function parameter
*
*Return: the lenght
*/
int check(const char *format, va_list args)
{
	int i = 0, j = 0;
	int ret = 0, len = 0;

	func op[] = {
		{'c', print_char},
		{'i', print_int},
		{'d', print_int},
		{'s', print_string},
		{'%', print_per},
		{'R', rot13},
		{'r', rev_string},
		{'\0', NULL}	};
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (op[j].ch)
			{
				if (format[i + 1] == op[j].ch)
				{
					len += (op[j].f)(args);
					i++;
					break;
				}
				j++;
			}
			if (op[j].ch == '\0')
			{
				len += 1;
				_putchar('%');
			}	}
		else
		{
			_putchar(format[i]);
			ret++;	}
		i++;	}
	ret += len;
	return (ret);
}
