#include <stdio.h>
/**
 * main - Print all possible combinations of two two-digit numbers.
 *
 * Return: 0 exit success
 */
int main(void)
{
	int a, b, m, n, o, p;

	for (a = 0; a < 100; a++)
	{
		m = a / 10;
		n = a % 10;
		for (b = 0; b < 100; b++)
		{
			o = b / 10;
			p = b % 10;
			if (m < o || (m = o && n < p})
			{
				putchar(m + '0');
				putchar(n + '0');
				putchar(' ');
				putchar(o + '0');
				putchar(p + '0');
				if (m != 9 || n != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
