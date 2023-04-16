#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num- number
 * @str: num
 * Return: val
*/

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
	count++;
	}

	return (1);
}

/**
 * main- main func
 * @argc: par
 * @argv: par
 *Return: val
*/

int main(int argc, char *argv[])
{
	int count, sum = 0, str;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str = atoi(argv[count]);
			sum += str;
		}
		else
		{
			puts("Error");
			return (1);
		}
	count++;
	}

	printf("%d\n", sum);

	return (0);
}

