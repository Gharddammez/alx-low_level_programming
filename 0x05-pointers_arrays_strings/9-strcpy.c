#include "main.h"
/**
 * *_strcpy- copy and you can show me later the proof
 * @dest:parameter a
 * @src:parameter b
 * Return: my val val
*/

char *_strcpy(char *dest, char *src)
{
int a;

for (a = 0 ; src[a] != '\0' ; a++)
{
dest[a] = src[a];
}
dest[a++] = '\0';
return (dest);
}
