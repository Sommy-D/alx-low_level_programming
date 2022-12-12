#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * main - followed by a new line
 * Return: 0
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
		putchar(lc);

	putchar('\n');

	return (0);
}
