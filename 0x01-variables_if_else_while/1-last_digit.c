#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 * description - find the sign of the last digit of a random num
 * Return: 0 Always (Success)
 */

int main(void)
{
	int n, rem;
	char *text;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = n % 10;

	if (rem > 5)
		text = "and is greater than 5";
	else if (rem == 0)
		text = "and is 0";
	else
		text = "and is less than 6 and not 0";

	printf("Last digit of %d is %d %s\n", n, rem, text);
	return (0);
}
