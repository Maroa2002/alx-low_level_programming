#include <string.h>
#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: string to be printed
  *
  * Return: void
  **/

void puts_half(char *str)
{
	int i, size;

	size = strlen(str);
	if (size % 2 != 0)
	{
		for (i = (size - 1) / 2; i < size; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	} else if (size % 2 == 0)
	{
		for (i = (size / 2); i < size; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}

