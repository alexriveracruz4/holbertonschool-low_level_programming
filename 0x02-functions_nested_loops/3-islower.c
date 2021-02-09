#include "holberton.h"

/**
 * _islower -  function that checks for lowercase character
 * @c: character to check
 *
 * Return: 1 if character is lowercase, 0 otherwise void
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
