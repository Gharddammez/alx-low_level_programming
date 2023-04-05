#include "main.h"
#include <stdio.h>
/**
 * _sqrt- square it
 * _sqrt: my square root check
 * @n:parameter
 * @b:parameter
 * Return: values based on if
*/
int _sqrt(int n, int b)
{
int root = b * b;

if (root > n)
{
return (-1);
}
if (root == n)
{
return (b);
}

return (_sqrt(n, b + 1));
}
/**
 * _sqrt_recursion- square square
 * _sqrt_recursion: my square root
 * @n:parameter
 * Return: the squareroot
*/

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
