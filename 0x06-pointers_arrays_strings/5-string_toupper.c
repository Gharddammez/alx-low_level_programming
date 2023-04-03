#include "main.h"
#include <stdio.h>

/**
 * string_toupper - upper case changer
 * string_toupper:change it to upper
 * @st: parameter
 * Return: the value
*/

char *string_toupper(char *st)
{
int star = 0;

while (st[star])
{
if (st[star] >= 'a' && st[star] <= 'z')
{
st[star] -= 32;
}
star++;
}
return (st);
}
