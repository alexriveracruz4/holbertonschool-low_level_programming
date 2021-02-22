#include "holberton.h"

/**
 * _memset - function fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * @s: pointer
 * @b: contant byte
 * @n: bytes of the memory to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter = 0;

	while (counter < n)
	{
		s[counter] = b;
		counter++;
	}
	return (s);
}
