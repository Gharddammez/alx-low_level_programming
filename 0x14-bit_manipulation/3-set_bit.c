#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index.
 * @n: A pointer to the bit.
 * @index: The index to set the value.
 * Return: Return 1 if no error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}

