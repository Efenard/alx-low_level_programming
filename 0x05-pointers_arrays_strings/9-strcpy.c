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
	int i = 0;

	//for (; src[i] != '\0'; i++)
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
