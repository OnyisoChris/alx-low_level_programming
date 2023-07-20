#include "main.h"

/**
 *_isdigit - Checks for a digit (0 through 9)
 *@c: parameter to be returned
 *Return: 1 if success and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
