#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 *times_table- printing table 9
 *
*/
void times_table(void)
{
int i, j, z, u, v;

for (i = 0 ; i <= 9 ; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
z = i * j;
if (z > 9)
{
u = z % 10;
v = (z - u) / 10;
_putchar(44);
_putchar(32);
_putchar(v + '0');
_putchar(u + '0');
}
else
{
if (j != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(z + '0');
}
}
_putchar('\n');
}

}
