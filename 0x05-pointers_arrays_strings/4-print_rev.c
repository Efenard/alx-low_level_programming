#include "main.h"
#include <stdio.h>

/*
 * print_rev - Prints a string in reverse
 *
 * @s: string input
 *
 * Return: The string in reverse
 */
int print_rev(char *s)
{
	int num = 0;
	int i, n;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		num++;
	}
	for (n = (num - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
