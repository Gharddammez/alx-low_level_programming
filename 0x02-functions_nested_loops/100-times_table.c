#include "main.h"
#include <unistd.h>
/**
 * print_times_table- all the tables
 * @n:parameter here
*/

void print_times_table(int n)
{
int num1, tiply, duct;

if (n >= 0 && n <= 15)
{
for (num1 = 0 ; num1 <= n ; num1++)
{
_putchar('0');
for (duct = 1 ; duct <= n ; duct++)
{
_putchar(',');
_putchar(' ');
tiply = num1 * duct;
if (tiply <= 99)
{
_putchar(' ');
}
if (tiply <= 9)
{
_putchar(' ');
}
if (tiply >= 100)
{
_putchar((tiply / 100) + '0');
_putchar(((tiply / 10)) % 10 + '0');
}
else if (tiply <= 99 && tiply >= 10)
{
_putchar((tiply / 10) + '0');
}
_putchar((tiply % 10) + '0');
}
_putchar('\n');
}
}
}
