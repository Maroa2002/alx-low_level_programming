#include "hash_tables.h"

/**
  * hash_table_set - adds an element to the hash table
  * @ht: hash table to add or update the key/value to
  * @key: the key
  * @value: value associated with the key
  * Return: 1 if it succeeded, 0 otherwise
  **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current, *new_node;

	if (!key || !ht || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size); /*finding the index*/
	if (ht->array[index]) /* checking if the key exists */
	{
		current = ht->array[index];
		while (current)
		{
			if (strcmp(current->key, key) == 0) /* update value if key exists */
			{
				free(current->value);
				current->value = strdup(value);
				return (current->value ? 1 : 0);
			}
			current = current->next;
		}
	}
	new_node = malloc(sizeof(hash_node_t)); /* new node for the key-value pair */
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index]; /* inserting new node at the beginning */
	ht->array[index] = new_node;
	return (1);
}
