#include "main.h"

/**
 * palindromechecker -> checks the string
 * @s: the string to be checked
 * @len: the length of the string
 * @i: the increment, starts at 0
 * Return: 1 if it's a palindrome, 0 if it's not
 */
int palindromechecker(char *s, int len, int i)
{
	if (i < len && s[i] == s[len])
		return (palindromechecker(s, len - 1, i + 1));
	if (s[i] != s[len])
		return (0);
	return (1);
}
/**
 * _strlen_recursion -> returns the length of a string
 * @s: the string to check the length
 * Return: an integer that displays the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * is_palindrome - checks to see if a string is a palindrome
 * @s: the string to cheeck
 * Return: 1 if it's a palindrome, 2 if it's not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromechecker(s, length, i));
}
