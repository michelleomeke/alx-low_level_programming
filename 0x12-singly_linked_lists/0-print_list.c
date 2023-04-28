#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h)
{
printf("[%lu] %s\n", (unsigned long)h->len, h->str ? h->str : "(nil)");
h = h->next;
count++;
}

return (count);
}

