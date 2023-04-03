#include "main.h"
#include <stdio.h>

/**
 * _strncpy - string copier
 * _strncpy: copy all of my string
 * @dest: parameter destination
 * @src: parameter copier
 * @n: paramenter number
 * Return: the concanteted string huh
*/

char *_strncpy(char *dest, char *src, int n)
{
	int num = 0, lenth = 0;

	while (src[num++])
	lenth++;

	for (num = 0 ; src[num] && num < n ; num++)
	dest[num] = src[num];

	for (num = lenth ; num < n ; num++)
	dest[num] = '\0';

	return (dest);

}

