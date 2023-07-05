#include "main.h"

/**
  * is_prime_number - checks for a prime number
  * @n: input number
  * Return: integer
  **/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0); /* 0 and 1 are not prime numbers */
	}

	return (check_prime(n, 2)); /* checks for prime numbers from divisor 2 */
}

/**
  * check_prime - checks for prime number from divisor 2
  * @n: number to be checked
  * @divisor: divisor
  * Return: integer
  **/

int check_prime(int n, int divisor)
{
	if (divisor == n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (check_prime(n, divisor + 1)); /* divisibility with next divisor */
}
