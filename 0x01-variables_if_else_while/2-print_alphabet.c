#include <stdio.h>
/**
 * main- program to print the alphabets
 *
 * Return: 0 (Success)
*/

int main(void)
{
char lower;

for (lower = 'a' ; lower <= 'z' ; lower++)
{
putchar (lower);
}

putchar('\n');

return (0);
}

