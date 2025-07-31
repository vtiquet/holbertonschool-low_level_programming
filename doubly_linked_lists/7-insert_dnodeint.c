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
	dlistint_t *nn, *actual;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	actual = *h;
	while (actual != NULL && i < idx)
	{
		actual = (*actual).next;
		i++;
	}
	if (actual == NULL && i == idx)
		return (add_dnodeint_end(h, n));
	else if (actual == NULL && i < idx)
		return (NULL);
	nn = malloc(sizeof(dlistint_t));
	if (nn == NULL)
		return (NULL);
	(*nn).n = n;
	(*nn).next = actual;
	(*nn).prev = (*actual).prev;
	if ((*actual).prev != NULL)
		(*actual).prev->next = nn;
	(*actual).prev = nn;
	return (nn);
}
