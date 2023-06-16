#include <stdio.h>

/**
  * main - prints the alphabet in lowercase
  *
  * Return: Always 0(Success)
  **/

int main(void)
{
	/* declare a variable */
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		/* print the alphabet */
		putchar(alphabet);
	}
	/* print a new line */
	putchar('\n');
	return (0);
}
