#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i = 48, j = 48, k = 48, l = 49;

	while (i < 58)
	{
		while (j < 58)
		{
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
			k = i;
			l = (j == 9) ? 8 : (j + 1);
		}
		i++;
		j = 48;
	}
	putchar(10);
	return (0);
}
