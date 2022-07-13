#include "main.h"
#include <stdio.h>

/*
 *
 * print_rev - function that prints a string, in reverse.
 *
 * @*s: string input
 *
 * Return: The string in reverse
 */

void print_rev(char *s)
{
/*	int num = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		num++;
	}
	for (n = (num - 1); n >= 0; n--)
	{
		putchar(s[n]);
	}
	putchar('\n');
**/
	int len = 0, index;

	while (s[index++])
		len++;
	for (index = len - 1; index >= 0; index--)
		putchar(s[index]);
	putchar('\n');
}
