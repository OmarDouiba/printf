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
	int i = 0, ret, printed_char = 0;
	int (*f)(va_list);

	va_list arg;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				printed_char++;
			}
			else
			{
				f = checker(format[i + 1]);
				if (f == NULL)
					return (-1);
				ret = f(arg);
				va_arg(arg, int);
				printed_char += ret;
			}
			i = i + 2;
			continue;
		}
		else
		{
			_putchar(format[i]);
			printed_char++;
		}
		i++;
	}
	va_end(arg);
	return (printed_char);
}
