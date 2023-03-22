#include <stdio.h>
/**
 * main- reversing my alphabets
 *
 * Return: 0 (Success)
*/

int main(void)
{
char reverse;

for (reverse = 'z' ; reverse >= 'a' ; reverse--)
{
putchar(reverse);
}
putchar('\n');
return (0);
}

