#include "main.h"
/**
 * rev_string- reverse the words given and console them maybe
 * @s: my parameter
*/

void rev_string(char *s)
{
int size = 0, num = 0;
char comp;

while (s[num++])
{
size++;
}
for (num = size - 1 ; num >= size / 2 ; num--)
{
comp = s[num];
s[num] = s[size - num - 1];
s[size - num - 1] = comp;
}
}
