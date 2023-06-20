#include "main.h"

/**
  * main - calling print_alphabet
  *
  * Return: Always 0 (Success)
  **/

int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}

/**
  * print_alphabet - prints the alphabet, in lowercase
  *
  * Returns: Returns (void)
  **/

void print_alphabet(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
}

