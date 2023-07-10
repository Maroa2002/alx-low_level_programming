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
	strcpy(str_cat, s1); /* copies s1 into str_cat */
	strcat(str_cat, s2); /* concatenates s2 to str_cat */

	return (str_cat);
}

