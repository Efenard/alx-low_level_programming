#include "main.h"

/**
 * _islower - function that checks for lowercase
 *
 * Return: 0
 *
 **/

void _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return(0);
}
