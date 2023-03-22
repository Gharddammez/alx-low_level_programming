#include <stdio.h>
/**
 * main-printing a lot of fibonacci
 * Return: Always 0
*/

int main(void)
{
int count;
unsigned long num1 = 0, num2 = 1, tots;
unsigned long half11, half12, half21, half22;
unsigned long half1, half2;

for (count = 0 ; count < 92 ; count++)
{
tots = num1 + num2;
printf("%ld, ", tots);
num1 = num2;
num2 = tots;
}
half11 = num1 / 10000000000;
half21 = num2 / 10000000000;
half12 = num1 % 10000000000;
half22 = num2 % 10000000000;
for (count = 93 ; count < 99 ; count++)
{
half1 = half11 + half21;
half2 = half12 + half22;
if (half12 + half22 > 9999999999)
{
half1 += 1;
half2 %= 10000000000;
}
printf("%lu%lu", half1, half2);
if (count != 98)
printf(", ");
half11 = half21;
half12 = half22;
half21 = half1;
half22 = half2;
}
printf("\n");
return (0);

}
