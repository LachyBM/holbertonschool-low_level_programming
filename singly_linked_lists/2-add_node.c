#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node- prints a list
 * @head: value
 * @str: value
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup = strdup(str);
	int length = 0;

	while (dup[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(dup);
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
