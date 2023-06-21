#include <stdio.h>

/**
  * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
  *
  * Return: Always 0
  **/

int main(void)
{
	int i;
	/* initializing the first two terms*/
	int term1 = 1, term2 = 2;
	/*initialize the next term*/
	int next_term = term1 + term2;

	/*printing the first two terms*/
	printf("%d, %d, ", term1, term2);
	/*printing 3rd to 50th term*/
	for (i = 3; i <= 50; ++i)
	{
		if (i != 50)
		{
			printf("%d, ", next_term);
		}
		else
		{
			printf("%d\n", next_term);
		}
		term1 = term2;
		term2 = next_term;
		next_term = term1 + term2;
	}

	return (0);
}

