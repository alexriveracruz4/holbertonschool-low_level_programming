#include "holberton.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character to be located in s
 *
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{

	int len_s = 0;
	int counter = 0;
	char *f;

	while (s[len_s] != 0)
		len_s++;

	while (counter < len_s)
	{
		if (s[counter] == c)
		{
			f = &s[counter];
			break;
		}
		counter++;
	}

	if (s[counter] == 0)
		f = 0;
	return (f);
}
