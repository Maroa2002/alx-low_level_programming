#include "hash_tables.h"

/**
  * key_index - gives the index of a key
  * @key: the key
  * @size: size of array of hash table
  * Return: index at which the key/value pair should be
  * stored in the array of the hash table
  **/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (!key || size == 0)
		return (0);

	/* calculating the index/hash code using the hash_djb2 fn */
	index = hash_djb2(key);

	/* modulo used to limit index within table size */
	return (index % size);
}
