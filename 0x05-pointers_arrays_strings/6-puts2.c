#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints one character out of two strings
 *
 * @str: The string containing the characters
 *
 */
void puts2(char *s)
{
	int len = 0, index = 0;

	while (str[index++])
		len++;
	for (index = 0; index < len; index += 2)
		_putchar(str[index]);
	_putchar('\n');
}
