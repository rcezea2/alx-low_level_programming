#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	i = 97;
	while (i < 103)
        {
                putchar(i);
                i++;
        }
	putchar(10);
	return (0);
}
