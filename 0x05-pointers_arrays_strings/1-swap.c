#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the value of two  int
 *
 * @a: The first integer
 *
 * @b: The second integer
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
