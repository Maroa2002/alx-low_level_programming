#include "main.h"

/**
  * print_most_numbers - prints the numbers, from 0 to 9
  * except 2 and 4
  *
  * Return: void
  **/

void print_most_numbers(void)
{
	int count;

	for (count = 0; count <= 9; count++)
	{
		if ((count != 2) && (count != 4))
		{
			_putchar(count + 48);
		}
	}
	_putchar('\n');
}
