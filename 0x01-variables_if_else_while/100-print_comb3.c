#include <stdio.h>

/**
 * main -  Prints all possible different combinations of two digits.
 *
 * Return: 0 exit succes
 */
int main(void)
{
	int n = 49;
	int m = 48;

	while (m < 58)
	{
		while (n < 58)
		{
			if (n > m)
			{
				putchar(m);
				putchar(n);
				if (m != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n++;
		}
		n = m + 1;
		m++;
	}
	putchar('\n');

	return (0);
}
