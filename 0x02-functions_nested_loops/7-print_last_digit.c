#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * print_last_digit-print all the last ones
 *@p:parameter use
 *Return: the last digits
*/
int print_last_digit(int p)
{
int check;

check = p % 10;
if (p < 0)
{
check = check * -1;
}
_putchar(check + '0');
return (check);

}
