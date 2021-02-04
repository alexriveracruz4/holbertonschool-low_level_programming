#include <stdio.h>

/**
 * main - Print the lowercase alphabet in reverse
 *
 * Return: 0 exit success
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
