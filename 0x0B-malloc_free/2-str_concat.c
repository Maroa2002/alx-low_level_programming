#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * str_concat - convatenates 2 strings
  * @s1: destination string
  * @s2: source string
  * Return: pointer to string, on success
  * NULL, on failure
  **/

char *str_concat(char *s1, char *s2)
{
	char *str_cat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	str_cat = malloc(sizeof(*s1) * (strlen(s1) + strlen(s2)) + 1);
	if (str_cat == NULL)
	{
		return (NULL);
	}
	str_cat = strcat(s1, s2);

	return (str_cat);
}

