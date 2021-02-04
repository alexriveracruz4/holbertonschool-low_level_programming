#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase
 *
 * Return: 0 exit succes
 */
int main(void)
{
	int n = 48;
	int m = 97;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (m < 103)
	{
		putchar(m);
		m++;
	}
	putchar('\n');

	return (0);
}
