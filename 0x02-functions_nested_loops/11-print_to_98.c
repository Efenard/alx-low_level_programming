#include "main.h"

/**
 * print_to_98 - print all natural numbers from input to 98
 *
 * @n: The number to begin count at
 * 
 * Return: The result of the addition
 *
 **/

void print_to_98(int n)
{
	int n;
	
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
