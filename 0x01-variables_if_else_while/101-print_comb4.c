#include <stdio.h>
/**
 * main - Print all possible different combinations of three digits
 *
 * Return: 0 exit success
 */
int main(void)
{
	int n = 50;
	int m = 49;
	int l = 48;

	while (l < 58)
	{
		while (m < 58)
		{
			while (n < 58)
			{
				if (l < m && m < n)
				{
					putchar(l);
					putchar(m);
					putchar(n);
					if (l != 55 || m != 56 || n != 57)
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
		m = l + 1;
		l++;
	}
	putchar('\n');

	return (0);
}
