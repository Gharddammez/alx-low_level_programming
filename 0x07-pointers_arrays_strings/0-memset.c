#include "main.h"

/**
 * _memset - this block has specific value
 * @s: the address
 * @b: the value used
 * @n: number of bytes changed
 * Return: the array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0 ; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}

