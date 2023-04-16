#include "main.h"
/**
 * _memcpy - copies n bytes from memory area.
 * @src: first memory area.
 * @dest: Second memory area.
 * @n: number of bytes.
 *
 * Return: a pointer to the string dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
