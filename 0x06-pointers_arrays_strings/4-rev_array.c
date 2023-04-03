#include <stdio.h>
#include "main.h"
/**
 * reverse_array - array reverser
 * reverse_array: reverse that array
 * @n: parameter
 * @a: parameter
 * Return: the value ish
*/

void reverse_array(int *a, int n)
{
int j, k = 0;
for (j = n - 1 ; j >= n / 2 ; j--)
{
k = a[n - 1 - j];
a[n - 1 - j] = a[j];
a[j] = k;
}

}
