#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints one character out of two strings
 *
 * @str: The string to be printed
 *
 */
void puts_half(char *s)
{
	int len = 0, index = 0, n;

	while (str[index++])
		len++;
	if ((len % 2) == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);
	_putchar('\n');
}
