#include "hash_tables.h"

/**
  * hash_table_create - creates a hash table
  * @size: size of the array
  * Return: pointer to the newly created table,
  * else NULL
  **/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	/* allocate memory for the table */
	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	/* allocate memory for array member of table */
	table->array = malloc(sizeof(hash_node_t *) * table->size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	/* sets all the arrays to NULL */
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
