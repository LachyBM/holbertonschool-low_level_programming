#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index- prints a list
 * @h: value
 * @idx: value
 * @n: value
 * Return: address
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node;
	dlistint_t *head = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (head != NULL)
	{
		if (i == idx - 1)
		{
			if (head->next == NULL)
				return (add_dnodeint_end(h, n));

			new_node = malloc(sizeof(dlistint_t));

			if (!new_node)
			{
				free(new_node);
				return (NULL);
			}

			new_node->n = n;
			new_node->next = head->next;
			new_node->prev = head;
			head->next = new_node;

			return (new_node);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
