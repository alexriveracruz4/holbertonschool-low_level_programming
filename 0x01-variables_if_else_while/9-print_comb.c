#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers
 *
 * Return: 0 exit succes
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
