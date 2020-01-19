#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer hash table
 * @key: the hash key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned int long i;
hash_node_t *new, *curr;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
i = key_index((unsigned char *)key, ht->size);
return (0);
tmp->next = ht->array[index];
ht->array[index] = tmp;
return (1);
}
