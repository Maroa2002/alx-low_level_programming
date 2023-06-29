#include <string.h>
#include "main.h"

/**
  * reverse_array - reverses an array of integers
  * @a: the array of integers
  * @n: number of elements of the array
  *
  * Return: void
  **/

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++, j--;
	}
}
