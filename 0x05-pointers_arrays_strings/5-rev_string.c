#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverse a string
 *
 * @s: The string to be reversed
 *
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char temp;

	while (s[index++])
		len++;
	for (index = len - 1; index >= len / 2; index--)
	{
		temp = s[index];
		s[index] = s[len - index - 1];
		slen - index -1] = tmp;
	}
}
