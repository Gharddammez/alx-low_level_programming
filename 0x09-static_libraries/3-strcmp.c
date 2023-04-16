#include "main.h"
/**
 * _strcmp - concatenates n bytes from a string to another
 * @s1: Firste string
 * @s2: Second string
 *
 * Return: a pointer to the resulting string dest
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == 0)
{
return (0);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
