#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	long len = 59;

	write(2, msg, len);
	return (1);
}
