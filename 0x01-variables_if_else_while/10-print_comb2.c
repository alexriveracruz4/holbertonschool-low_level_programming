#include <stdio.h>

/**
 * main -  Print the numbers from 00 to 99
 *
 * Return: 0 exit succes
 */
int main(void)
{
	int n = 48;
	int m = 48;

	while (m < 58)
	{
		while (n < 58)
		{
			putchar(m);
			putchar(n);
			if (m != 57 || n != 57)
			{
				putchar(',');
				putchar(' ');
			}
			n++;

		}
		n = 48;
		m++;
	}
	putchar('\n');

	return (0);
}
