#include "hash_tables.h"
/**
 *hash_table_print - function that prints a hash table
 *
 *@ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
unsigned long int cont = 0, i = 0;

if (ht != NULL)
{
printf("{");
for (cont = 0; cont < ht->size; cont++)
{
node = ht->array[cont];
while (node != NULL)
{
if (i != 0)
printf(", ");
i = 1;
printf("'%s': '%s'", node->key, node->value);
node = node->next;
}
}
printf("}\n");
}
}
