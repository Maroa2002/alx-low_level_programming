#include "main.h"

/**
  * flip_bits - returns the number of bits to flip to get
  * from one another to another
  * @n: first number
  * @m: second number
  * Return: bits
  **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference;
	unsigned int count;

	/* findind bits that differ */
	difference = n ^ m;
	count = 0;

	while (difference)
	{
		count += difference & 1;
		difference >>= 1;
	}

	return (count);
}
