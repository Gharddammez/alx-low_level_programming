#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 *
 * @size: size of the array
 * @c: array of characters
 *
 * Return: Null if size is 0 or a pointer of the array
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i = 0;
if (size == 0)
return (NULL);
ptr = (char *) malloc(sizeof(char) * size);
if (ptr == NULL)
return (0);
while (i < size)
{
*(ptr + i) = c;
i++;
}
*(ptr + i) = 0;
return (ptr);
}
