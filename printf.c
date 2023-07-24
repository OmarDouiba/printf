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
	int len_string;

	va_start(args, format);
	if ((!format || (format[0] == '%' && !format[1])) ||
		(format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);
	len_string = check(format, args);
	va_end(args);
	return (len_string);
}
