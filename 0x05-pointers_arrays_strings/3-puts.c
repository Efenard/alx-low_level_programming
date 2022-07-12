#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string folloed by a newline
 *
 * @*str: Holds the string
 *
 * Return: The string *str followed by new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
