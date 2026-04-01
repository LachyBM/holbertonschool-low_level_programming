#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_node- create node fun
 * @key: key
 * @value: value
 * Return: node or fail
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
	{
		return (0);
	}

	node->key = strdup(key);
	node->value = strdup(value);

	if (node->key == NULL || node->value == NULL)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}

	node->next = NULL;
	return (node);
}


/**
 * hash_table_set- set hash table
 * @ht: ht
 * @key: key
 * @value: value
 * Return: pointer to newly created hash table
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node, *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			char *new_val = strdup(value);

			if (new_val == NULL)
			{
				return (0);
			}

			free(tmp->value);
			tmp->value = new_val;
			return (1);
		}
		tmp = tmp->next;
	}

	node = create_node(key, value);
	if (node == NULL)
		return (0);

	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
