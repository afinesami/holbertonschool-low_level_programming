#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given index in the list
 * @head: pointer to head of the list
 * @idx: index to add at, starting from 0
 * @n: value of new node
 * Return: new node or null
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *tmp, *new, *tmp_prev;

	if (head == NULL && idx > 0)
	return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n, new->prev = new->next = NULL;

	if (idx == 0)
	{
		if (*head)
	{
		new->next = *head;
		(*head)->prev = new, *head = new;
	}
		else
			*head = new;
		return (new);
	}
	count = 1, tmp = (*head)->next;
	while (tmp)
	{
		if (idx == count)
		{
			tmp->prev->next = new, new->prev = tmp->prev;
			new->next = tmp, tmp->prev = new;
			return (new);
		}
		count++;
		tmp_prev = tmp;
		tmp = tmp->next;
	}
	if (tmp == NULL && count == idx)
	{
		tmp_prev->next = new, new->prev = tmp_prev;
		return (new);
	}
	free(new);
	return (NULL);
}
