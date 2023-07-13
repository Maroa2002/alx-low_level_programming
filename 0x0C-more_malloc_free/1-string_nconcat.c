#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: destination string
  * @s2: source string
  * @n: elements to concat
  * Return: NULL or pointer to an array
  **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	str = malloc(sizeof(*s1) * (strlen(s1) + n) + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	strcpy(str, s1);
	if (n >= strlen(s2))
	{
		strcat(str, s2);
	}
	else
	{
		strncat(str, s2, n);
	}

	return (str);
}
