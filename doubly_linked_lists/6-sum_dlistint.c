#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum of
 * all the data (n) of a linked list.
 * @head: a pointer to the head of the dlistint_t list.
 * Return: the sum of all the data (n) of a linked list,
 * or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;
	dlistint_t *actual;

	actual = head;
	while (actual != NULL)
	{
		add = add + (*actual).n;
		actual = (*actual).next;
	}

	return (add);
}
