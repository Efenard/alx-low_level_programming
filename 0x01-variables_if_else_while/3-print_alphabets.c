#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: '3-print_alphabets'
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char al = 'a';
	char ab = 'A';

	for (al = 'a'; al <= 'z'; al++)
	putchar(al);
	for (ab = 'A'; ab <= 'Z'; ab++)
	putchar(ab);
	putchar('\n');
	/* your code goes there */
	return (0);
}
