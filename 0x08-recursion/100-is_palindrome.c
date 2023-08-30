#include "main.h"

int check_pal(char *s, int j, int length);
int _strglen_recursion(char *s);

/**
 * is_palindrome - checks if string palindrome
 * @s: string to be reversed
 *
 * Return: 1 if is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strglen_recursion(s)));
}

/**
 * _strglen_recursion - returns string length
 * @s: string to be computed
 *
 * Return: string length
 */

int _strglen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strglen_recursion(s + 1));
}

/**
 * check_pal - check if character is palindrome
 * @s: string to be computed
 * @j: iterator
 * @length: length of string
 *
 * Return: 1 if palindrone, 0 otherwise
 */

int check_pal(char *s, int j, int length)
{
	if (*(s + j) != *(s + length - 1))
		return (0);
	if (j >= length)
		return (1);
	return (check_pal(s, j + 1, length - 1));
}
