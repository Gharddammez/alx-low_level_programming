#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be flipped
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int g = n ^ m, flips = 0;

	while (g > 0)
	{
		flips += (g & 1);
		g >>= 1;
	}

	return (flips);
}

