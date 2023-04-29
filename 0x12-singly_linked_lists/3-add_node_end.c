#include <stdlib.h>
#include <string.h>
#include "lists.h"

#include "lists.h"

/**
 * _strlen - finds the length of a string.
 * @str: string to find the length of.
 *
 * Return: length of string.
 */
unsigned int _strlen(const char *str)
{
unsigned int len = 0;

while (str[len] != '\0')
len++;

return (len);
}

/**
 * add_node_end - adds a new node to the end of a list_t list.
 * @head: pointer to the head of the list.
 * @str: string to add to the new node.
 *
 * Return: pointer to the new node or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last_node;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = _strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;

last_node->next = new_node;

return (new_node);
}

