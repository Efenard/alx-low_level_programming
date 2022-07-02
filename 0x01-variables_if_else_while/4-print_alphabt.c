#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: '4 Alphabets'
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char al;
	
	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'e'&& al != 'q')
		putchar(al);
	}
	putchar('\n');
	/* your code goes there */
	return (0);
}
