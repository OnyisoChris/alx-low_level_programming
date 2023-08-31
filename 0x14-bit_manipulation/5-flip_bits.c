#include "main.h"

/**
 * flip_bits - Calculates the number of bits needed to flip to get from n to m.
 * @n: First number.
 * @m: Second number.
 *
 * Return: The number of bits needed to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int index = 0;

	while (xor_result > 0)
	{
		index += xor_result & 1;
		xor_result >>= 1;
	}

	return (index);
}
