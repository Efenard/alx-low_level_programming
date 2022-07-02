#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: '100-print_comb3.c'
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			putchar(num1 % 10) + '0');
			putchar(num2 % 10) + '0');
			if (num1 == 9 && num2 ==9)
				continue;
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');

	/* your code goes there */
	return (0);
}
