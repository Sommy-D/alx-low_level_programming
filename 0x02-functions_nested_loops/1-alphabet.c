#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: 0
 */

void print_alphabet(void)
{
	char c = 0;

	while (c <= 'z')

	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
