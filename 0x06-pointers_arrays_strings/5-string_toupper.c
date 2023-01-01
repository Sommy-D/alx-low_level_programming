#include "main.h"

/**
 * string_toupper -> functions that changes lowercase to uppercase
 * @s:string
 * Return: char
 */
char *string_toupper(char *s)
{
	int p;

	p = 0;
	while (*(s + p))
	{
		if (*(s + p) >= 'a' && *(s + p) <= 'z')
			*(s + p) -= 'a' - 'A';
		p++;
	}
	return (s);
}

