#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: '8-print_base16'
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int num1;
	char al;

	for (num1 = 0; num1 < 10; num1++)
	putchar(num1 % 10 + '0');

	for (al = 'a'; al <= 'f'; al++)
	putchar(al);
	putchar('\n');

	/* your code goes there */
	return (0);
}
