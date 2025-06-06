#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	i = 65;

	while (i < 91)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
