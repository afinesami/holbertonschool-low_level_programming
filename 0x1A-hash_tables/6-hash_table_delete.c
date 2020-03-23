#include "hash_tables.h"
/**
 *hash_table_delete - function that deletes a hash table
 *
 *@ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node, *temp;
unsigned long int cont = 0;

for (cont = 0; cont < ht->size; cont++)
{
node = ht->array[cont];
while (node != NULL)
{
temp = node;
node = node->next;
free(temp->key);
free(temp->value);
free(temp);
}
}
free(ht->array);
free(ht);
}
