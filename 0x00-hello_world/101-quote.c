#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 * Return:  0 (Success)
 */
int main(void)
{
	const char *error_message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, error_message, strlen(error_message));
	return (0);
}

