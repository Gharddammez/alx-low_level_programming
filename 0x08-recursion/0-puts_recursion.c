#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion- a string folowed by a new line here and there
 * @s: this is my parameter
 * Return: 0
*/
void  _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
