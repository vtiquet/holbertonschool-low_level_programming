#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value.
 * @key: is the key.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *nn, *actual;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	i = key_i((const unsigned char *)key, (*ht).size);
	actual = (*ht).array[i];
	while (actual != NULL)
	{
		if (strcmp((*actual).key, key) == 0)
		{
			free((*actual).value);
			(*actual).value = strdup(value);
			if ((*actual).value == NULL)
				return (0);
			return (1);
		}
		actual = (*actual).next;
	}
	nn = malloc(sizeof(hash_node_t));
	if (nn == NULL)
		return (0);
	(*nn).key = strdup(key);
	if ((*nn).key == NULL)
	{
		free(nn);
		return (0);
	}
	(*nn).value = strdup(value);
	if ((*nn).value == NULL)
	{
		free((*nn).key);
		free(nn);
		return (0);
	}
	(*nn).next = (*ht).array[i];
	(*ht).array[i] = nn;
	return (1);
}
