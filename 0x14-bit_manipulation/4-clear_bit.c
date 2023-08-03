#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0
  * @n: pointer to the given integer
  * @index: given index
  * Return: 1 or 0 if an error occurs
  **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1;

	if (index >= size)
		return (-1);

	/* given index is set to 0 while the rest to 1 */
	mask = ~(mask << index);
	*n &= mask;

	return (1);
}
