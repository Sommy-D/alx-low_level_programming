#include "main.h"

/**
 * print_alphabet_x10 - -rints alphabet 10 time
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = '0';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}