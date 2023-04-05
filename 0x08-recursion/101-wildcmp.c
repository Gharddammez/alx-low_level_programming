#include "main.h"
#include <stdio.h>
/**
 * wildcmp- print it
 * @s1: par 1
 * @s2: par 2
 * Return: 0 if not and 1 if identical
*/

int wildcmp(char *s1, char *s2)
{
if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
{
return (0);
}
if (*s2 == '\0' && *s1 == '\0')
{
return (1);
}
if (*s2 == *s1)
{
return (wildcmp(s1 + 1, s2 + 1));
}
if (*s2 == '*')
{
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}
return (0);
}
