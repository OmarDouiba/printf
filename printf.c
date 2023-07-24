#include "main.h"
/**
 *_printf - Custom implementation of
 *the printf function.
 *@format: Pointer to a character array that
 *contains the format string.
 *
 *Return: total number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j, holder_c = 0, count = 0;

	func op[] = {
	{"c", print_char},
	{"i", print_int},
	{"d", print_int},
	{"s", print_string},
	{"%", print_per},
	{"R", rot13},
	{"r", rev_string},
	{NULL, NULL}};
	va_start(args, format);
	if ((!format || (format[0] == '%' && !format[1])) ||
		(format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			_putchar(format[i]), holder_c++;
		else
		{
			j = 0;
			while (op[j].ch)
			{
				if (format[i + 1] == *op[j].ch)
				{
					count += (op[j].f)(args), i++;
					break;
				}
				j++;
			}
			if (op[j].ch == NULL)
				count += 1,_putchar('%');
		}
		i++;
	}
	holder_c += count;
	va_end(args);
	return (holder_c);
	}
