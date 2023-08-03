#include "main.h"

/**
  * _strlen - returns string length
  * @str: input string
  * Return: integer size of string
  **/

size_t _strlen(const char *str)
{
	size_t size;

	size = 0;
	while (*str != '\0')
	{
		size++;
		str++;
	}

	return (size);
}

/**
  * _pow - custom power function
  * @base: base number
  * @exponent: exponent number
  * Return: power of a number
  **/

unsigned int _pow(unsigned int base, int exponent)
{
	unsigned int output = 1;
	int i = 0;

	if (exponent >= 0)
	{
		for (i = 0; i < exponent; i++)
			output *= base;
	}
	else
	{
		for (i = 0; i > exponent; i--)
			output /= base;
	}

	return (output);
}

/**
  * binary_to_uint - converts binary to unsigned int
  * @b: pointer to given binary
  * Return: converted number, or 0 if
  * one or more chars is not 0 or 1 and b is NULL
  **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int exponent = 0, len, i;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		uint += ((b[i] - '0') * (_pow(2, exponent)));
		exponent++;
	}

	return (uint);
}

