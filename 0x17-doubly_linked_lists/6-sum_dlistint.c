#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to head of the list
 * Return: sum of all nodes or 0
 **/
int sum_dlistint(dlistint_t *head)
{
	long int sum;
	dlistint_t *tmp;

	sum = 0;
	if (head == NULL)
	return (sum);

	tmp = head;
	while (tmp)
	{
	sum += tmp->n;
	tmp = tmp->next;
	}
	return (sum);
}
