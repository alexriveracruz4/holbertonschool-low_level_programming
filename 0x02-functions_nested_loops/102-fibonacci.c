#include <stdio.h>

/**
 * main -  program that prints the first 50 Fibonacci numbers
 *
 * Return: 0 exit success
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c, d;

	printf("%d, %d, ", a, b);
	for (c = 1; c <= 48; c++)
	{
		d = a + b;
		if (c != 48)
		{
			printf("%d, ", d);
			a = b;
			b = d;
		}
		else
		{
			printf("%d\n", d);
		}
	}
	return (0);
}
