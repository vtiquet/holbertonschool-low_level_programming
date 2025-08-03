#include "hash_tables.h"
/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: is the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *next_node = NULL, *node = NULL;

	if (!ht)
		return;
	if ((*ht).array)
	{
		while (i < (*ht).size)
		{
			if ((*ht).array[i])
			{
				node = (*ht).array[i];
				while (node)
				{
					next_node = (*node).next;
					if ((*node).value)
						free((*node).value);
					if ((*node).key)
						free((*node).key);
					free(node);
					node = next_node;
				}
			}
			i++;
		}
		free((*ht).array);
	}
	free(ht);
}
/**
 * main - check the code for
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    if (ht != NULL)
    {
        hash_table_delete(ht);
    }
    return (EXIT_SUCCESS);
}
