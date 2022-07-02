#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: '1-The last digit'
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
	else
	{
		if (n == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, a);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
		}
	}
	/* your code goes there */
	return (0);
}
