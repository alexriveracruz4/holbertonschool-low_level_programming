#include<stdio.h>

/**
 *main - Print the size of types
 *
 *Return: 0 (successful exit)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a lon long int: %d byte(s)\n", sizeof(long long int));
	printd("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}
