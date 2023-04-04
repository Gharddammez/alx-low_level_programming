#include "main.h"
/**
 * _memcpy - this will copy my memory area
 * @dest: my storage
 * @src: the copied one
 * @n: my bytes
 * Return: the copied memory
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0, b = n;

	for (; a < b ; a++)
	{
	dest[a] = src[a];
	n--;
	}
	return (dest);
}

