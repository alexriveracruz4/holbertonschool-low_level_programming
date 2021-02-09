#include "holberton.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: any number between 0 and 15
 *
 * Return: void
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n < 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');
				c = a * b;
				if (c < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((c % 10) + '0');
				}
				else if (c < 100)
				{
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				else
				{
					_putchar((c / 10) / 10 + '0');
					_putchar((c / 10) % 10 + '0');
					_putchar((c % 10) + '0');
				}
				if (b == n)
				{
					_putchar('\n');
				}
			}
		}
	}
}
