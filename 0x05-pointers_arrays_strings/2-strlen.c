#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the lenght of a string
 *
 * @s: Holds the string
 *
 * Return: The lenght of@s*
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
