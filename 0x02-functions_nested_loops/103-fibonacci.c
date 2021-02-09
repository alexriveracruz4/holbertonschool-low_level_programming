#include <stdio.h>

/**
 * main -  program that finds and prints the sum of the even-valued terms,
 * followed by a new line
 *
 * Return: 0 exit success
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c = a + b;
	long int d;

	d = 2;
	while (c <= 4000000)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			d = d + c;
		}
		a = b;
		b = c;
	}
	printf("%ld\n", d);

	return (0);
}
