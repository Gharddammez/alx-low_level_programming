#include "main.h"
#include <stdio.h>

/**
 * leet - ecode the text
 * leet: encoder function
 * @n: input
 * Return: n value
*/

char *leet(char *n)
{

int a, b;
char set1[] = "aAeEoOtTlL";
char set2[] = "4433007711";

for (a = 0 ; n[a] != '\0' ; a++)
{
for (b = 0 ; b < 10 ; b++)
{
if (n[a] == set1[b])
{
n[a] = set2[b];
}
}
}
return (n);
}
