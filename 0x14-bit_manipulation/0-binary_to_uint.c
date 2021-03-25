#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c, r = 0;

	if (b == NULL)
		return (0);
	for (c = 0; b[c]; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
	}
	for (c = 0; b[c]; c++)
	{
		r <<= 1;
		if (b[c] == '1')
			r += 1;
	}
	return (r);
}
