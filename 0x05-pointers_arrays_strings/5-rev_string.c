#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverse a string
 *
 * @s: The string to be reversed
 *
 * Return: String in reverse
 */
void rev_string(char *s)
{
	int len = 0, index;
	char temp = s[0];

	while (s[len] != '\0')
		len++;
	for (index = 0; index < len; index++)
	{
		len--;
		temp = s[index];
		s[index] = s[len];
		s[len] = temp;
	}
}
