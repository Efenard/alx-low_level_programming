#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the lenght of a string
 *
 * @s: Holds the string
 *
 */
 
int _strlen(char *s)
{
	int len;

	len = _strlen(*s);
	printf("%d\n", len);
	return (0);
}
