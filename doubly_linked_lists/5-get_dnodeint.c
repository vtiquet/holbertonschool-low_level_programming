#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the
 * nth node of a linked list.
 * @head: a pointer to the head of the dlistint_t list.
 * @index: is the index of the node to retrieve, starting from 0.
 * Return: the address of the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *actual;

	actual = head;
	while (actual != NULL && i < index)
	{
		actual = (*actual).next;
		i++;
	}

	return (actual);
}
