#include "hash_tables.h"
/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: is the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *actual, *tmp;

    if (ht == NULL)
        return;

    for (i = 0; i < (*ht).size; i++)
    {
        actual = (*ht).array[i];
        while (actual != NULL)
        {
            tmp = actual;
            actual = (*actual).next;
            free((*tmp).key);
            free((*tmp).value);
            free(tmp);
        }
    }
    free((*ht).array);
    free(ht);
}
