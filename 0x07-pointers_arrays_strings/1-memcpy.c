#include "holberton.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: pointer to be modificated
 * @src: pointer to be copied
 * @n: n bytes from memory area src
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter = 0;

	while (counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}
	return (dest);
}
