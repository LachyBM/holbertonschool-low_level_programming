#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint- prints a list
 * @h: value
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h->next != NULL)
		h = h->next;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->prev;
	}
	return (len);
}
