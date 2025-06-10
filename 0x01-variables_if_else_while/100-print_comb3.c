#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i = 48;
	int j;

	while (i < 57)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				break;
			putchar(44);
			putchar(32);
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
