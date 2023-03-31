#include "main.h"
/**
 * puts2- print every character of a string I will write down
 * @str:parameter used
*/

void puts2(char *str)
{
int e;
int k = 0;

while (str[k] != '\0')
{
k++;
}
for (e = 0 ; e < k ; e += 2)
{
_putchar(str[e]);
}
_putchar('\n');
}
