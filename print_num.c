#include "main.h"

/**
 *print_num - Prints a long long integer
 *to the standard output.
 *@n: The long long integer to be printed.
 */
void print_num(long long int n)
{
	unsigned long long int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if (num / 10)
	{
		print_num(num / 10);
	}
	_putchar((num % 10) + '0');
}
