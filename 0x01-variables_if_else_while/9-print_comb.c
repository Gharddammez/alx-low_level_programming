#include <stdio.h>
/**
 * main- printing combination of numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
int n;

for (n = 0; n < 10 ; n++)
{
putchar((n % 10) + '0');
if (n != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
