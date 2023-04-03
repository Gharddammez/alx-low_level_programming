#include "main.h"
/**
 * rev_string- reverse the words
 * @s: my parameter
*/

void rev_string(char *s)
{
int siz = 0, num = 0;
char check;

while (s[num++])
{
siz++;
}
for (num = siz - 1 ; num >= siz / 2 ; num--)
{
check = s[num];
s[num] = s[siz - num - 1];
s[siz - num - 1] = check;
}
}

