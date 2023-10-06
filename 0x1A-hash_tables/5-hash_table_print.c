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
	char *comma = "";

	if (!ht || !ht->array)
		return;

	printf("{");

	i = 0;
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current)
		{
			printf("%s'%s': '%s'", comma, current->key, current->value);
			comma = ", ";
			current = current->next;
		}
		i++;
	}

	printf("}\n");
}
