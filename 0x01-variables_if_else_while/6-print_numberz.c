#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: '6 Print numbez'
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int num1;
	
	for (num1 = 0; num1 < 10; num1++)
	putchar((num1 % 10) + '0');
	putchar('\n');

	/* your code goes there */
	return (0);
}
