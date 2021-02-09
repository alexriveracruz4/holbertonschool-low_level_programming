#include <stdio.h>

/**
 * main - program that computes and prints the sum of all the multiples of 3
 * or 5 below 1024 (excluded)
 *
 * Return: 0 exit success
 */
int main(void)
{
	int n;
	int m = 0;

	for (n = 1; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			m = m + n;
		}
	}
	printf("%d\n", m);
	return (0);
}
