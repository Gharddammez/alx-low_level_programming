#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
    unsigned int num = 1;
    char *endianCheck = (char *)&num;

    if (*endianCheck == 1)
    {
        /* The least significant byte is 1 (little endian) */
        return 1;
    }
    else
    {
        /* The most significant byte is 1 (big endian) */
        return 0;
    }
}

