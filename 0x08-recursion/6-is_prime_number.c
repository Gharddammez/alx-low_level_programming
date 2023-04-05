#include "main.h"
#include <stdio.h>
/**
 * check_prime- check it
 * @n: num
 * @a: checker
 * Return: the expected output for each
*/

int check_prime(int n, int a)
{
if (n <= 1)
{
return (0);
}
if (n % a == 0 && a > 1)
{
return (0);
}
if ((n / a) < a)
{
return (1);
}
return (check_prime(n, a + 1));
}

/**
 * is_prime_number- check it
 * @n: num
 * Return: the expected output for each
*/
int is_prime_number(int n)
{
return (check_prime(n, 1));
}
