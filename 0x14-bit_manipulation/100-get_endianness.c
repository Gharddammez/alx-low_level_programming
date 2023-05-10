#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if big endian and 1 if little endian.
 */
int get_endianness(void)
{
    int digit = 1;
    char *ndianese = (char *)&digit;

    if (*ndianese == 1)
    {
        return 1;  // Little endian
    }

    return 0;  // Big endian
}

