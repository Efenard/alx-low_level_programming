#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints one character out of two strings
 *
 * @str: The string containing the characters
 *
 */
void puts2(char *str)
{
	int len = 0;

	for (; str[len] != '\0'; len++)
	{
		if ((len % 2) == 0);
		putchar(str[len]);
		else
			continue;
	}
	putchar('\n');
}
