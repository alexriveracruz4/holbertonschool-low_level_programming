#include "holberton.h"

/**
 * _abs -  function that computes the absolute value of an integer
 * @n: integer to check
 *
 * Return: if n is positive or 0 give n, if n is negative five -n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
