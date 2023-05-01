#include <stdio.h>

void __attribute__((constructor)) called_first(void);

/**
 * called_first - function that prints a message before the main function
 *
 * Return: void
 */
void called_first(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
