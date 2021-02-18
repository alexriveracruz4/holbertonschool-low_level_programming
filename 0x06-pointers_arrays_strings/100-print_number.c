#include "holberton.h"

/**
 * print_number -  function that prints an integer
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (n / 10 > 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
