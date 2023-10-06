#include "hash_tables.h"

/**
  * hash_table_delete - deletes a hash table
  * @ht: the hash table
  * Return: nothing
  **/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;

	if (!ht || !ht->array)
		return;

	i = 0;
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		i++;
	}

	free(ht->array);
	free(ht);
}
