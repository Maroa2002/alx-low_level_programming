#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at given index
  * @n: pointer to the given number
  * @index: given index
  * Return: 1 or 0 if an error occurs
  **/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;
	unsigned long int mask = 1;

	/* bytes to bits conversion */
	size = sizeof(unsigned long int) * 8;
	if (index >= size) /* index out of range */
		return (-1);

	/* develop mask with the specified index being 1 and the rest 0 */
	mask = mask << index;
	*n = *n | mask; /* changes specified index to 1, others unchanged */

	return (1);
}

/**
  * other method
  * unsigned long int mask;
  * mask = 1UL << index;
  * *n = *n | mask
  * return (1);
  *
  **/
