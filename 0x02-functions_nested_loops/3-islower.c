#include <unistd.h>
#include "main.h"
/**
 * _islower-lowercase checker
 * Return: 1 (If lower) 0 (if not)
 * @c: the parameter used
*/

int _islower(int c)
{
if (c >= 'a'  && c <= 'z')
{
return (1);
}
else
{
return (0);
}

}
