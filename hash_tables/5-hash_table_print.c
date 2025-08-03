#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table.
 * @ht: is the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *actual;
    int first_pair = 1;

    if (ht == NULL)
        return;
    printf("{");
    for (i = 0; i < (*ht).size; i++)
    {
        actual = (*ht).array[i];
        while (actual != NULL)
        {
            if (!first_pair)
                printf(", ");
            printf("'%s': '%s'", (*actual).key, (*actual).value);
            first_pair = 0;
            actual = (*actual).next;
        }
    }
    printf("}\n");
}
