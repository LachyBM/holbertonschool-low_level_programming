#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print-print hash table
 * @ht: ht
 * Return: Print hash table or nothing if ht NULL
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int print;

	if (ht == NULL)
		return;

	print = 0;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (print)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			print = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
