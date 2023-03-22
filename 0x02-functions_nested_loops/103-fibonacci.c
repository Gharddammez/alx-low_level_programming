#include <stdio.h>
/**
 * main-fibonacci even sum print
 * Return: Nothing
*/
int main(void)
{
int p = 0;
long a = 1, k = 2, add = k;
while (k + a < 4000000)
{
k +=  a;
if (k % 2 == 0)
add += k;
a = k - a;
++p;
}
printf("%ld\n", add);
return (0);
}
