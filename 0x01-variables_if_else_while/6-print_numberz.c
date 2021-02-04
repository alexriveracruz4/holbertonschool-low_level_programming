#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0 with
 * putchar
 *
 * Return: 0 exit success
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar((n) + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
