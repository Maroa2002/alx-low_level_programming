#include "main.h"

/**
  * get_bit - returns the bit at given index
  * @n: number
  * @index: given index
  * Return: bit or -1 if error occurred
  **/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;
	int bit;

	size = sizeof(unsigned long int) * 8;
	if (index > size)
		return (-1);

	bit = ((n >> index) & 1);
	return (bit);
}
