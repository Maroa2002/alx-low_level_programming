#include "main.h"

/**
  * print_numbers - prints the numbers, from 0 to 9
  *
  * Return: void
  **/

void print_numbers(void)
{
	int count;

	for (count = 0; count <= 9; count++)
	{
		_putchar(count + 48);
	}
	_putchar('\n');
}
