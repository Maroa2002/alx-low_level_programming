#include <string.h>
#include "main.h"

/**
  * print_rev - prints a string, in reverse
  * @s: string to be reversed
  *
  * Return: void
  **/

void print_rev(char *s)
{
	int i, size = strlen(s);

	for (i = size - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

