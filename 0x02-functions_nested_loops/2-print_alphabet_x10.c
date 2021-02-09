#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char letter = 'a';

	while (n < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		putchar('\n');
		letter = 'a';
		n++;
	}
}
