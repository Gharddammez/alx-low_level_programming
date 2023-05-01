#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If memory allocation fails or head is NULL, NULL.
 *         Otherwise, the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new, *last;

    if (head == NULL || str == NULL)
        return (NULL);

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    new->str = strdup(str);
    if (new->str == NULL)
    {
        free(new);
        return (NULL);
    }

    new->len = strlen(str);
    new->next = NULL;

    if (*head == NULL)
    {
        *head = new;
        return (new);
    }

    last = *head;
    while (last->next != NULL)
        last = last->next;

    last->next = new;
    return (new);
}
