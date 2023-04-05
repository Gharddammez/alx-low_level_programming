#include "main.h"
/**
 * _print_rev_recursion - printing strings in reverse
 * @s: my string
 * Return: 0
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}

