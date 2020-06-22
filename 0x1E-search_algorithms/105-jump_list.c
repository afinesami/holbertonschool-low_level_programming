#include "search_algos.h"

/**
 * linear_skip - Searches using linear skip.
 * @list: A pointer to the  head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: NULL, a pointer to the first node where the value is located.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (!list)
		return (NULL);

	for (node = jump = list; jump->next && jump->n < value;)
	{
		node = jump;
		if (jump->express)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
