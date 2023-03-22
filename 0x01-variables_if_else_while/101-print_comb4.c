#include <stdio.h>
/**
 * main- printing combination of numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
int numa;
int numb;
int numc;

while (numc < 10)
{
numb = 0;
while (numb < 10)
{
numa = 0;
while (numa < 10)
{
if (numa != numb &&  numb != numc && numc < numb && numb < numa)
{
putchar('0' + numc);
putchar('0' + numb);
putchar('0' + numa);
if (numa + numb + numc != 9 + 8 + 7)
{
putchar(',');
putchar(' ');
}
}
numa++;
}
numb++;
}
numc++;
}
putchar('\n');
return (0);
}

