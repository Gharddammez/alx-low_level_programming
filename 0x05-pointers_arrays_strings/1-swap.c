#include "main.h"
/**
 * swap_int- just swipe my numbers this and that that and this
 * @a:parameter one
 * @b:paramter two
*/

void swap_int(int *a, int *b)
{
int change = *b;

*b = *a;
*a = change;

}
