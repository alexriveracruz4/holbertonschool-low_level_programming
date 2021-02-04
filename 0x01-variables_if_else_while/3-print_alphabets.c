#include <stdio.h>

/**
 * main - Print the alphabet lowercase and uppercase with putchar
 *
 * Return: 0 exit success
 */
int main(void)
{
        char low;
	char upp;

        low = 'a';
	upp = 'A';
        while (low <= 'z')
        {
                putchar(low);
                low++;
        }
	while (upp <= 'Z')
	{
		putchar(upp);
		upp++;
	}
        putchar ('\n');

	return (0);
}
