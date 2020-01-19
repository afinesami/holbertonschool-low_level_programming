#include "hash_tables.h"

/**
 * hash_djb2 - hash function generates a djb2
 * @str: pointer to chars a hash
 * Return: hash key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
	hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
