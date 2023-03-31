#include "main.h"
#include <stdio.h>
/**
 * _puts- string me a new line on the console
 * @str:my parameter
*/

void _puts(char *str)
{
for (; *str != '\0' ; str++)
{
_putchar(*str);
}
_putchar('\n');
}
