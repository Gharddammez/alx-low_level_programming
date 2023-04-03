#include "main.h"

/**
 * _strncat - just two to concatenate
 * _strncat: my concancator here
 * @dest: string append
 * @src: append string
 * @n: number of bytes used
 * Return: a result to the function
*/

char *_strncat(char *dest, char *src, int n)
{
int start = 0;
int len = 0;

while (dest[start++])
{
len++;
}
for (start = 0 ; src[start] && start < n ; start++)
{
dest[len++] = src[start];
}
return (dest);
}
