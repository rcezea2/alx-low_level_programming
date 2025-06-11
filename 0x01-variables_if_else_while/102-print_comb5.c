#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i = 48, j, k, l;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = i;
			l = j + 1;
			while (k < 58)
			{
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56)
						break;
					putchar(44);
					putchar(32);
					l++;
				}
				k++;
				l = 48;
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
