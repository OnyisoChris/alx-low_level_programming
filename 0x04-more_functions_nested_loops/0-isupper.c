#include "main.h"
/**
 * _isupper - Prints an uppercase character
 * @c: parameter to be checked
 * Return: 1 or 0 if success or fail respectively
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
