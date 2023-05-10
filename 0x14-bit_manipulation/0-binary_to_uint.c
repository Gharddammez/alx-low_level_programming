#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @binary: pointer to a string of characters
 *
 * Return: The converted number, or 0 if character in string is not 1
 * or 0 or if string is NULL
 */
unsigned int binary_to_uint(const char *binary)
{
	int len = strlen(binary);
	unsigned int result = 0;
	int decimalValue = 1, i;

	if (binary == NULL)
	{
		return (0);
	}
	for (len = 0; binary[len]; len++)
	{
		if (binary[len] != '0' && binary[len] != '1')
		{
			return (0);
		}
	}

	for (i = (len - 1); i >= 0; i--)
	{
		if (binary[i] == '1')
		{
			result += decimalValue;
			decimalValue *= 2;
		}
	}

	return (result);
}

