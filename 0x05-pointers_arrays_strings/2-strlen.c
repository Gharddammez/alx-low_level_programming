#include "main.h"
#include <stdio.h>

/**
 * _strlen- string checker
 * _strlen: I need my string lengh checked
 * @s:paramenter in use
 * Return: he lenght of string
*/

int _strlen(char *s)
{

int k = 0;

while (*s++)
k++;
return (k);
}
