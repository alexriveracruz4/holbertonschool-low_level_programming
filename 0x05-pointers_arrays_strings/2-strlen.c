#include "holberton.h"

/**
 * _strlen -  function that returns the length of a string
 * @s: string to find lenght of
 *
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != 0)
	{
		count++;
	}
	return (count);
}
