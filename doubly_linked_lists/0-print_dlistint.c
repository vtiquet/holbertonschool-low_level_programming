#include "lists.h"
/**
* print_dlistint - a function that prints all the elements of a list.
* @h: pointer with list informations.
* Return: the number of nodes in the list.
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("[%u]\n", (*h).n);
		h = (*h).next;
		i++;
	}
	return (i);
}
