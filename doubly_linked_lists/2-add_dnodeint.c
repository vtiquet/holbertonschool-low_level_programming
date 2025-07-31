#include "lists.h"
/**
* add_dnodeint - a function that adds a new node at the beginning of a list.
* @head: a pointer to a pointer to the head of the list.
* @n: the integer for the new node.
* Return: the address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nn;

	nn = malloc(sizeof(dlistint_t));
	if (nn == NULL)
		return (NULL);

	(*nn).n = n;
	(*nn).prev = NULL;
	(*nn).next = *head;

	if (*head != NULL)
		(*head)->prev = nn;

	*head = nn;

	return (nn);
}
