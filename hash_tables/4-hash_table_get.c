#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_get- Hash table get
 * @ht: hash table
 * @key: key looking for
 * Return: value or null depending
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *p;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	p = ht->array[idx];
	while (p)
	{
		if (strcmp(p->key, key) == 0)
			return (p->value);
		p = p->next;
	}
	return (NULL);
}
