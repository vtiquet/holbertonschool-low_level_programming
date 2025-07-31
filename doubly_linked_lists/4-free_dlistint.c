#include "lists.h"
/**
* free_dlistint - a function that frees a list.
* @head: pointer with list informations.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nn, *actual;

	actual = head;
	while (actual != NULL)
	{
		nn = (*actual).next;
		free(actual);
		actual = nn;
	}
}
