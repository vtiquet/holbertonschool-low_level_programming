#include "lists.h"
/**
* add_node_end - a function that adds a new node at the end of a list.
* @head: pointer with list informations.
* @str: the string to be duplicated and stored in the new node.
* Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn;
	list_t *tmp;
	int i = 0;

	nn = malloc(sizeof(list_t));
	if (nn == NULL)
		return (NULL);
	if (str)
	{
		(*nn).str = strdup(str);
		if ((*nn).str == NULL)
		{
			return (NULL);
		}
		while (str[i])
			i++;
		(*nn).len = i;
	}
	else
	{
		(*nn).str = NULL;
		(*nn).len = 0;
	}
	(*nn).next = NULL;
	if (*head == NULL)
	{
		*head = nn;
	}
	else
	{
		tmp = *head;
		while ((*tmp).next != NULL)
		{
			tmp = (*tmp).next;
		}
		(*tmp).next = nn;
	}
	return (nn);
}
