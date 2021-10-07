#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints list elements
 * @h: pointer to head of type list
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)

{
	size_t nd = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nd++;
	}
	return (nd);
}
