#include <main.h>
/*
 * main - Entry point
 *
 * Description: 'function that prints the alphabet, in lowercase, followed by a new line'
 *
 * Return: Always 0 (Success)
 *
 * */

void print_alphabet(void)
{
	void print_alhabet(void)
	{
		char letter;
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	return (0);
}