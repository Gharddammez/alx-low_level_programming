#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * print_to_98- priint all to 98
 * @n: parameter
*/
void print_to_98(int n)
{
int num1;
if (n <= 98)
{
for (num1 = n ; num1 <= 98 ; num1++)
{
if (num1 != 98)
{
printf("%d, ", num1);
}
if (num1 == 98)
{
printf("%d\n", num1);
}
}
/*first end*/
}
else if (n == 98)
{
printf("%d\n", n);
}
/*second end*/
else if (n >= 98)
{
for (num1 = n ; num1 >= 98 ; num1--)
{
if (num1 != 98)
printf("%d, ", num1);
if (num1 == 98)
{
printf("%d\n", num1);
}
}
/*third end*/
}
}
