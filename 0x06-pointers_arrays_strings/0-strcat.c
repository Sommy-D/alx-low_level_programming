#include "main.h"

/**
 * _strcat -> a function that concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * Return: a string
 */
char *_strcat(char *dest, const char *src)

{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
