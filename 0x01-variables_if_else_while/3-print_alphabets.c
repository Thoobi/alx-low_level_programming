#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;

	char lw;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (lw = 'A'; lw <= 'Z'; lw++)
	{
		putchar(lw);
	}
	putchar('\n');
	return (0);
}
