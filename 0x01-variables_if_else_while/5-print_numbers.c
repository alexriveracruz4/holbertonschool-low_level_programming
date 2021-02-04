#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10 starting from 0
 *
 * Return: 0 exit success
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');

	return (0);
}
