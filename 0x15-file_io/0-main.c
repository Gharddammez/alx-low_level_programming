#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code for ALX School students.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	ssize_t chars_printed;

	if (argc != 2)
	{
		dprintf(2, "Usage: %s filename\n", argv[0]);
		exit(1);
	}

	chars_printed = read_textfile(argv[1], 114);
	printf("\n(printed chars: %li)\n", chars_printed);

	chars_printed = read_textfile(argv[1], 1024);
	printf("\n(printed chars: %li)\n", chars_printed);

	return (0);
}

