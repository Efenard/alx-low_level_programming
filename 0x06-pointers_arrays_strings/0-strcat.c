#include "main.h"
#include <stdio/h>

/*
 *
 * *_strcat(char *dest, char *src) - Function that concatenates two strings
 *
 * @dest: Destination String
 *
 * @src: Source String
 *
 * */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	wbile (dest[index])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
	
}
