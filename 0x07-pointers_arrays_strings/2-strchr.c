#include "main.h"
/**
 * _strchr - the enter mode
 * @s: enter
 * @c: enter
 * Return: 0
*/
char *_strchr(char *s, char c)
{
	int b = 0;

	for (; s[b] >= '\0' ; b++)
	{
		if (s[b] == c)
		{
		return (&s[b]);
		}
	}
	return (0);
}

