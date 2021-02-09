#include <stdio.h>

/**
 * main -  program that prints the first 98 Fibonacci numbers
 *
 * Return: 0 exit success
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	int c;
	unsigned long int d;

	printf("1, 2, ");
	for (c = 1; c <= 96; c++)
	{
		d = a + b;
		if (c != 48)
		{
			printf("%lu, ", d);
			a = b;
			b = d;
		}
		else
		{
			printf("%lu\n", d);
		}
	}
	return (0);
}
