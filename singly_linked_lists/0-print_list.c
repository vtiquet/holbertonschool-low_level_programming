#include "lists.h"
/**
* print_list - a function that prints all the elements of a list.
* @h: pointer with list informations.
* Return: the number of nodes in the list, 0 if h == 0.
*/
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
		}
		h = (*h).next;
		i++;
	}
	return (i);
}
