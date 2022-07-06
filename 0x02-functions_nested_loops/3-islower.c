#include "main.h"

/**
 * _islower - function that checks for lowercase
 *
 * @c:  is the int that will use for the argument of the function
 *
 * Return: 0
 *
 **/

void _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return(0);
}
