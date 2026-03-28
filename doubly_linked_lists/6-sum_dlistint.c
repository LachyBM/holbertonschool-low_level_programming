#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint- sum of all
 * @head: value
 * Return: address
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;
	unsigned int i = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
		i++;
	}
	return (sum);
}
