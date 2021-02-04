#include <stdio.h>

/**
 * main - Print the alphabet lowercase with putchar
 *
 * Return: 0 exit success
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter != 'e' || letter != 'q')
		{
			putchar(letter);
			letter++;
		}
	}
	putchar ('\n');

	return (0);
}
