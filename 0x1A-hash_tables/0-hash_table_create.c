#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the table
 * Return: pointer to the table
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *HashT;

	if (size == 0)
	return (NULL);
	HashT = malloc(sizeof(hash_table_t));
	if (HashT == NULL)
		return (NULL);

	HashT->size = size;
	HashT->array = calloc(size, sizeof(hash_node_t *));
	if (HashT->array == NULL)
	{
		free(HashT);
		return (NULL);
	}
	return (HashT);
}
