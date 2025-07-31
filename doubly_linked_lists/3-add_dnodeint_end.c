#include "lists.h"
/**
* add_dnodeint_end - a function that adds a new node at the end of a list.
* @head: a pointer to a pointer to the head of the list.
* @n: the integer for the new node.
* Return: the address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nn, *actual;

	nn = malloc(sizeof(dlistint_t));
	if (nn == NULL)
		return (NULL);

	(*nn).n = n;
	(*nn).next = NULL;

	if (*head == NULL)
	{
		(*nn).prev = NULL;
		*head = nn;
		return (nn);
	}

	actual = *head;
	while ((*actual).next != NULL)
		actual = (*actual).next;

	(*actual).next = nn;
	(*nn).prev = actual;

	return (nn);
}
