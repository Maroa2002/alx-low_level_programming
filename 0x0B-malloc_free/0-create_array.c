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

	if (size == 0)
	{
		return (NULL);
	}
	while (1)
	{
		s = malloc(sizeof(*s) * 1);
		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
			s[0] = c;
			return (s);
		}
	}
	free(s);
}
