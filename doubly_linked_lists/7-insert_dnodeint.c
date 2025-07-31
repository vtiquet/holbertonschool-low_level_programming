#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * at a given position.
 * @h: a pointer to the head of the dlistint_t list.
 * @idx: is the index of the list where the new node should be added.
 * @n: the integer for the new node.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nn, *actual = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	nn = malloc(sizeof(dlistint_t));
	if (nn == NULL)
		return (NULL);
	(*nn).n = n;
	if (idx == 0)
	{
		(*nn).prev = NULL;
		(*nn).next = *h;
		if (*h != NULL)
		{
			(*h)->prev = nn;
			*h = nn;
			return (nn);
		}
	}
	while (actual != NULL && i < idx - 1)
	{
		actual = (*actual).next;
		i++;
	}
	if (actual == NULL)
	{
		free(nn);
		return (NULL);
	}
	(*nn).next = (*actual).next;
	(*nn).prev = actual;
	if ((*actual).prev != NULL)
		(*actual).prev->next = nn;
	(*actual).prev = nn;
	return (nn);
}
