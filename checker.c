#include "main.h"

/**
 *checker - Function that check the format
 *
 *@c: The character to be checked for its format.
 *
 *Return: Function Pointer.
 */
int (*checker(char c))(va_list)
{
	int i = 0;

	func op[] = {
		{'c', print_char},
		{'i', print_int},
		{'d', print_int},
		{'s', print_string},
		{'R', rot13},
		{'\0', NULL}
	};

	while (op[i].ch != '\0')
	{
		if (op[i].ch == c)
		{
			return (op[i].f);
		}
		i++;
	}

	return (NULL);
}
