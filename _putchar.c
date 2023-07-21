#include "main.h"

/**
*_putchar - print a single character to stdout
*@c: a char
*
*Return: 1 if the program success, -1 otherwiae
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
