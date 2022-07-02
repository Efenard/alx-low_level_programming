#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: '9-print_comb'
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int num1;
	
	for (num1 = 0; num1 <= 9; num1++)
	{
		putchar((num1 % 10) + '0');
		if (num1 == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	/* your code goes there */
	return (0);
}
