#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars,
  * and initializes it with a specific char.
  * @size: size of array
  * @c: specific char
  * Return: array of char, on success
  * NULL, if it fails
  **/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(*s) * size); /* add 1 for the null terminator */

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[size] = '\0'; /* adding the null terminator at end of array */

	return (s);
}
