#include "lists.h"
/**
* add_node - a function that adds a new node at the beginning of a list.
* @head: pointer with list informations.
* @str: the string to be duplicated and stored in the new node.
* Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;
	int i = 0;

	nn = malloc(sizeof(list_t));
	if (nn == NULL)
		return (NULL);
	if (str)
	{
		(*nn).str = strdup(str);
		if ((*nn).str == NULL)
			return (NULL);
		while (str[i])
			i++;
		(*nn).len = i;
	}
	else
	{
		(*nn).str = NULL;
		(*nn).len = 0;
	}
	(*nn).next = *head;
	*head = nn;
	return (nn);
}
