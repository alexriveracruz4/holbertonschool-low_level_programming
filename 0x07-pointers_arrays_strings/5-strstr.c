#include "holberton.h"

/**
 * _strstr - function finds the first occurrence of the substring needle in
 * the string haystack. The terminating null bytes (\0) are not compared
 * @haystack: string
 * @needle: string
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int counter_h = 0;
	int counter_n = 0;

	while (needle[counter_n] != 0)
	{
		while (haystack[counter_h] != 0)
		{
			if (needle[counter_n] == haystack[counter_h])
				return (&haystack[counter_h]);
			counter_h++;
		}
		counter_h = 0;
		counter_n++;
	}
	return (0);
}
