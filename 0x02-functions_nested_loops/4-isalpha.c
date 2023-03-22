#include <unistd.h>
#include "main.h"
/**
 * _isalpha-my letter checker null for numbers
 * Return: 1 (If lower) 0 (if not)
 * @c: the parameter used
*/

int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
