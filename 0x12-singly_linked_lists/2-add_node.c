#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into the new node.
 *
 * Return: the address of the new element or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
int len = 0;

while (str[len])
len++;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = len;
new_node->next = *head;
*head = new_node;

return (new_node);
}

