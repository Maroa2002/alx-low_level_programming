#include <stdio.h>

/**
  * main - Considers the terms in the fibonacci
  * whose values do not exceed 4,000,000
  * and prints the sum of even-valued terms
  *
  * Return: Always 0
  **/

int main(void)
{
	int i;
	/* initializing the first two terms*/
	long term1 = 1, term2 = 2;
	/*initialize the next term*/
	long next_term = term1 + term2;
	long sum = term2;

	/*printing 3rd to 50th term*/
	for (i = 3; i <= 50; ++i)
	{
		term1 = term2; /* term1 = 2 for the first loop */
		term2 = next_term; /* term2 = 3 for the first loop */
		next_term = term1 + term2; /* next_term = 2 + 3 and the process continues */
		if ((next_term < 4000000) && (next_term % 2 == 0))
		{
			sum += next_term;
		}
	}
	printf("%ld\n", sum);

	return (0);
}

