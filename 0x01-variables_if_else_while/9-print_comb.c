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
		if (i == 57)
		{
			i++;
			continue;
		}
		putchar(44);
		putchar(32);
		i++;
	}
	putchar(10);
	return (0);
}
