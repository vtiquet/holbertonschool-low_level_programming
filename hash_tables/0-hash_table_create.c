#include "hash_tables.h"
/**
* hash_table_create - a function that creates a hash table.
* @size: is the size of the arrayy.
* Return: a pointer to the newly created hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}
	(*ht).size = size;
	(*ht).array = malloc(sizeof(hash_node_t *) * size);
	if ((*ht).array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}
	while (i < size)
	{
		(*ht).array[i] = NULL;
		i++;
	}
	return (ht);
}
