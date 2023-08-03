#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @binary: Pointer to a string of characters.
 *
 * Return: The converted number, or 0 if a character in the string is not '0' or '1'
 * or if the string is NULL.
 */
unsigned int binary_to_uint(const char *binary)
{
    int len, i;
    unsigned int result = 0;

    if (binary == NULL)
        return 0;

    len = strlen(binary);

    for (i = 0; i < len; i++)
    {
        if (binary[i] != '0' && binary[i] != '1')
            return 0;

        result <<= 1; // Left-shift the result by 1 to make space for the next bit

        if (binary[i] == '1')
            result |= 1; // Set the least significant bit to 1
    }

    return result;
}

