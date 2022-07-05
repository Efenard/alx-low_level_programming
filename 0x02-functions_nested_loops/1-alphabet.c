#include <stdio.h>
#include <main.h>
#include <stdlib.h>

/*
 * main - Entry point
 *
 * Description: 'function that prints the alphabet, in lowercase, followed by a new line'
 *
 * Return: Always 0 (Success)
 *
 * */

int main(void)
{
	void print_alhabet(void)
	{
		char letter;
		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);
		putchar('\n');
	return (0);
}
