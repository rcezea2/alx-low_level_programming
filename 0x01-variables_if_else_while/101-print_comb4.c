#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i = 48;
	int j, k;

	while (i < 56)
	{
		j = i + 1;
		while (j < 57)
		{
			k = j + 1;
			while (k < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
					break;
				putchar(44);
				putchar(32);
				k++;
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
