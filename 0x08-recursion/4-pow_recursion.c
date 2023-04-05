#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion- power of my number a to b
 * @x: my number
 * @y: my power
 * Return: power of my num
*/
int _pow_recursion(int x, int y)
{
int total = x;

if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (total * _pow_recursion(x, y - 1));
}
