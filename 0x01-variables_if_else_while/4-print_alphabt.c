#include <stdio.h>

/**
  * main - prints alphabet in lowercase except q and e
  *
  * Return: Alwawys 0 (Success)
  */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
