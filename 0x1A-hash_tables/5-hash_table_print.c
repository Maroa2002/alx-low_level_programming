#include "hash_tables.h"

/**
  * hash_table_print - prints the hash table
  * @ht: the hash table
  * Return: Always nothing
  **/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int is_printed = 0;

	if (!ht)
		return;

	printf("{");

	i = 0;
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current)
		{
			if (is_printed)
				printf(",");
			printf("'%s': '%s'", current->key, current->value);
			is_printed = 1;
			current = current->next;
		}
		i++;
	}

	printf("}\n");
}
