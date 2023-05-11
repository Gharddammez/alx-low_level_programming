#include <unistd.h>

/**

my_putchar - writes the character c to stdout
@c: The character
Return: On success 1.
*/
int my_putchar(char character)
{
return (write(1, &character, 1));
}





