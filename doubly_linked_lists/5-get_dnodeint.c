#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index- prints a list
 * @head: value
 * @index: value
 * Return: address
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (index == i)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
