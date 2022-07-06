#include "main.h"

/**
 * void print_alphabet_x10 - Entry point
 *
 * print_alphabet_x10 - funtion to print 10 times the alphabet
 *
 * Return: Always 0 (Success)
 *
 **/

void print_alphabet_x10(void)
{
	int count = 0;
	char c;

	while (count++ <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
