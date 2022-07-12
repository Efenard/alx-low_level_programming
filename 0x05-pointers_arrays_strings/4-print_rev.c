#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a line
 *
 * @s: Holds the string
 *
 * Return: The the reverse of @s*
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;
	for (index = len - 1; index >= 0; index --)
		putchar(s[index]);
	putchar('\n');
}
