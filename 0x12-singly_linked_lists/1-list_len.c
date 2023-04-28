#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* list_len - returns the number of elements in a linked list_t list
* @h: pointer to the head of the list
*
* Return: the number of elements in the list
*/

size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}

printf("The length of my list is %lu\n", count);

return (count);
}

