#include "main.h"

/**
  * print_times_table - prints the n times table
  * @n: length of the table
  *
  * Return: Always void
  **/

void print_times_table(int n)
{
	int row, col, prod;

	if (n > 15 || n < 0)
		;
	else
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			for (col = 1; col <= n; col++)
			{
				_putchar(',');
				_putchar(' ');

				prod = row * col;

				if (prod <= 99)
				{
					_putchar(' ');
				} else if (prod <= 9)
				{
					_putchar(' ');
				} else if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				} else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
