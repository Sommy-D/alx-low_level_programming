#include "main.h"

/**
 * _print_rev_recursion -> functions that returns the length of a string
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s) /*if statement*/
	{
		_print_rev_recursion(s + 1); /*add s*/
		_putchar(*s); /*print s*/
	}
}
