#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end- prints a list
 * @head: value
 * @str: value
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	char *dup = strdup(str);
	int length = 0;

	if (!dup)
		return (NULL);
	while (dup[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = dup;
	new_node->len = length;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current	= *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;

	return (new_node);
}
