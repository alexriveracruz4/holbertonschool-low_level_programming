#include "holberton.h"

/**
 * print_number -  function that prints an integer
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 > 9)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
	_putchar('\n');
}
