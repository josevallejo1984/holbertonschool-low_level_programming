#include "lists.h"
/**
 * insert_dnodeint_at_index - inset node in idx
 * @h: head linked list
 * @idx: index
 * @n: data to inset
 * Return: node address
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node_prev, *node_next = *h, *new;
	/* validate */
	if (*h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	/* add node in the front */
	if (idx == 0)
	{
		new->n = n;
		new->prev = NULL;
		new->next = node_next;
		node_next->prev = new;
		*h = new;
		return (new);
	}
	/* add node in the index */
	while (node_next != NULL)
	{
		if (i == idx)
		{
			new->n = n;
			new->next = node_next;
			new->prev = node_prev;
			node_next->prev = new;
			node_prev->next = new;
			return (new);
		}
		node_prev = node_next;
		node_next = node_next->next;
		i++;
	}

	return (NULL);
}
