#include "simple_shell.h"


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
