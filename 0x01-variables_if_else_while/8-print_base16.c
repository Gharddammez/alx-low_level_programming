#include <stdio.h>
/**
 * main- base 16 numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
char new;
int num;

for (num = 0 ; num < 10 ; num++)
{
putchar((num % 10) + '0');
}
for (new = 'a' ; new <= 'f' ; new++)
{
putchar (new);
}
putchar('\n');
return (0);
}
