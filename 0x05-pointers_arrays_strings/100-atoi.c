#include "main.h"

/**
 * _atoi- convert them string
 * @s: parameter
 * Return: integer
*/

int _atoi(char *s)
{
int c = 0;
unsigned int nim = 0;
int min = 1;
int max = 0;

while (s[c])
{
if (s[c] == 45)
{
min *= -1;
}
while (s[c] >= 48 && s[c] <= 57)
{
max = 1;
nim = (nim * 10) + (s[c] - '0');
c++;
}
if (max == 1)
{
break;
}
c++;
}
nim *= min;
return (nim);
}
