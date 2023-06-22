#include "main.h"

/**
  * more_numbers - prints 10 times the numbers, from 0 to 14
  *
  * Return: void
  **/

void more_numbers(void)
{
	int row;

	for (row = 1; row <= 10; row++)
	{
		int number;

		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar((number / 10) + 48);
			}
			_putchar((number % 10) + 48);
		}
		_putchar('\n');
	}
}
