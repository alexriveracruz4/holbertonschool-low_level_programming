#include "holberton.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: bytes from src to be appened
 *
 * Return: pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;

	while (dest[len1] != 0)
		len1++;
	while (len2 < n && src[len2] != 0)
	{
		dest[len1] = src[len2];
		len2++;
		len1++;
	}
	if (src[len2] == 0)
		dest[len1] = src[len2];
	return (dest);
}
