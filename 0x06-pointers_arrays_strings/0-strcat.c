#include "main.h"
#include <stdio.h>
/**
 * _strcat - this will concancate it
 * _strcat: concancate my strings
 * @dest: destination
 * @src: the source
 * Return: the result
*/

char *_strcat(char *dest, char *src)
{
int len = 0, j;

while (dest[len])
{
len++;
}
for (j = 0 ; src[j] != 0 ; j++)
{
dest[len] = src[j];
len++;
}
dest[len] = '\0';
return (dest);
}
