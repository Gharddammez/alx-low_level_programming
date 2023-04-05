#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion- the length of a string
 * @s: my string
 * Return: my length
*/
int _strlen_recursion(char *s)
{

if (*s == '\0')
{
return (0);
}
s++;

return (_strlen_recursion(s) + 1);
}
