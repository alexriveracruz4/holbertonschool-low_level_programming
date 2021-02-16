#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line
 * @a: array to be printed
 * @n: the number of elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int pos = 0;

	while (pos < n - 1)
	{
		printf("%i, ", a[pos]);
		pos++;
	}
	printf("%i\n", a[pos]);
}
