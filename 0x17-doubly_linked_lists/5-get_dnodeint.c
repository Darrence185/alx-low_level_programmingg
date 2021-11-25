#include "lists.h"
/**
* get_dnodeint_at_index - locates a node in a dlistint_t list
* @head: the head of the dlistint_t list
* @index: the node to locate
*
* Return: If the node does not exist - NULL, else address of located node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}