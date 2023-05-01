#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
    const list_t *current = h;
    size_t count = 0;

    while (current != NULL)
    {
        printf("[%d] %s\n", current->len, current->str != NULL ? current->str : "(nil)");
        current = current->next;
        count++;
    }

    return (count);
}