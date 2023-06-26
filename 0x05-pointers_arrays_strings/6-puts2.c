#include <string.h>
#include "main.h"

/**
  * puts2 - prints every other character of a string
  * starting with the first character
  * @str: string to be printed
  *
  * Return: void
  **/

void puts2(char *str)
{
	int i, size;

	size = strlen(str);
	for (i = 0; i < size; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
