#include "main.h"

/**
 *print_int - Function to print an integer.
 *
 *@K: A va_list containing the arguments
 *needed for the function.
 *
 *Return: Integer, representing the number
 *of characters printed.
 */
int print_int(va_list k)
{
	int i = 0;
	long long int n = va_arg(k, int), numb;

	numb = n;
	while (numb)
	{
		numb /= 10;
		i++;
	}
	print_num(n);
	return (i);
}
