#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index- prints a list
 * @head: value
 * @index: valu
 * Return: address
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	if (!head || !*head)
		return (-1);

	current = *head;

	while (current != NULL)
	{
		if (i == index)
		{
			if (current->prev != NULL)
				current->prev->next = current->next;
			else
				*head = current->next;

			if (current->next != NULL)
				current->next->prev = current->prev;

			free(current);
			return (1);
		}
		i++;
		current = current->next;
	}
	return (-1);
}
