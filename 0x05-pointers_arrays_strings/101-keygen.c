#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- generates number passwords here there
 * Return: 0 (Always)
*/

int main(void)
{
char passcode[100];
int i, sum, num;

sum = 0;

srand(time(NULL));
for (i = 0 ; i < 100 ; i++)
{
passcode[i] = rand() % 78;
sum += (passcode[i] + '0');
putchar(passcode[i] + '0');
if ((2772 - sum) - '0' < 78)
{
num = 2772 - sum - '0';
sum += num;
putchar(num + '0');
break;
}
}
return (0);
}
