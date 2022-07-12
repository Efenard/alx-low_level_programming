#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy a string pointed to by a source
 *
 * @dest: A buffer to copy the string to
 *
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string
 *
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (; src[index] != '\0'; index++)
	{
		dest[index] = src{index};
	}
	return (dest);
}
