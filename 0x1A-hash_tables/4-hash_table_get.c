#include "hash_tables.h"

/**
  * hash_table_get - retrieves a alue associated with a key
  * @ht: hash table to look into
  * @key: the key to be looked for
  * Return: value associated with the element,
  * or NULL if key couldn’t be found
  **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		/* checking if the key exists */
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
