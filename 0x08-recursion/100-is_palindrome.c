#include "main.h"

/**
 * _strlen_recursion- my length
 * @s: the string
 * Return: the length
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}

/**
 * compare- comparing my charaters
 * @s: my string
 * @num: iterator
 * @numy: iterator 2
 * Return: 0
*/
int compare(char *s, int num, int numy)
{
if (*(s + num) == *(s + numy))
{
if (num == numy || num == numy + 1)
{
return (1);
}
return (0 + compare(s, num + 1, numy - 1));
}
return (0);
}

/**
 * is_palindrome- detect the string palindrome truthness
 * @s: my string
 * Return: the result
*/
int is_palindrome(char *s)
{
if (*s == '\0')
{
return (1);
}
return (compare(s, 0, _strlen_recursion(s) - 1));
}
