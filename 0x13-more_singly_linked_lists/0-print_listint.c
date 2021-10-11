#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print elements of a listint_t list
 * @h: pointer variable containing 1st node address
 *
 * Description: use the h value to start traversing through the
 * list counting and printing each element
 * Return: number of nodes in link
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}

