#include <stdio.h>

/**
  * main - entry point
  * @rows: number of rows
  * Return: Always 0
  **/

/* Prototype */
void pyramid(int rows);

int main(void)
{
	pyramid(10);

	return (0);
}

/**
  * pyramid - displays a pyramid of stars
  * @rows: number of rows
  * Return: void
  **/

void pyramid(int rows)
{
	int cols; /* to represent columns */

	if (rows <= 0)
	{
		printf("\n");
	}
	else
	{
		for (int i = 1; i <= rows; i++)
		{
			for (cols = 1; cols <= (rows * 2) - 1; cols++)
			{
				if ((cols >= rows - (i - 1)) && (cols <= rows + (i - 1)))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
}
