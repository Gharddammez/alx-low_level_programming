#include <stdio.h>
/**
 * main- printing combination of numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
int var1 = 0;
int var2;
int var3;

int var4;
int var5;
int var6;
while (var1 <= 98)
{
var2 = (var1 / 10 + '0');
var3 = (var1 % 10 + '0');
var4 = 0;
while (var4 <= 99)
{
var5 = (var4 / 10 + '0');
var6 = (var4 % 10 + '0');
if (var1 < var4)
{
putchar(var2);
putchar(var3);
putchar(' ');
putchar(var5);
putchar(var6);
if (var1 != 98)
{
putchar(',');
putchar(' ');
}
}
var4++;
}
var1++;
}
putchar('\n');
return (0);
}

