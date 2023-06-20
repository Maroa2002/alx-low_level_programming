#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times the alphabet in lowercase
  *
  * Return: Returns void
  **/

void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
