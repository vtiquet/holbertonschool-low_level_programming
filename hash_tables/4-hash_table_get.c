#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into.
 * @key: is the key you are looking for.
 * Return: the value associated with the element, or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *actual;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, (*ht).size);
	actual = (*ht).array[i];
	while (actual != NULL)
	{
		if (strcmp((*actual).key, key) == 0)
			return ((*actual).value);
		actual = (*actual).next;
	}
	return (NULL);
}
