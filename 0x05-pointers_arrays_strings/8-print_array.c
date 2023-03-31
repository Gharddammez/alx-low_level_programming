#include <stdio.h>
#include "main.h"
/**
 * print_array- my array has which values please
 * @a:parameter 1
 * @n:parameter 2
*/

void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n ; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
puts("");
}
