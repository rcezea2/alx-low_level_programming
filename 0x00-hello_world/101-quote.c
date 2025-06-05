#include <unistd.h>

/**
 * main - Entry point
 * Return:  1 (Success)
 */
int main(void)
{
	char *message1 = "and that piece of art is useful";
	char *message2 = "\" - Dora Korpar, 2015-10-19\n";

	write(2, message1, 31);
	write(2, message2, 28);
	return (1);
}

