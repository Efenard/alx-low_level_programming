#include "main.h"

/**
 * print_sign - function to check for a sign of a number
 *
 * @c:  is the int that will use for the argument of the function
 *
 * Return: 0
 *
 **/

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
