#include "main.h"
#include <stdio.h>

/**
 * rot13- my encoder more detail
 * rot13: my encoder
 * @p: my parameter
 * Return: p
*/

char *rot13(char *p)
{
	int i, j;
	char dataset1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dataset2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; p[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 52 ; j++)
		{
			if (p[i] == dataset1[j])
			{
				p[i] = dataset2[j];
				break;
			}
		}
	}
	return (p);
}
