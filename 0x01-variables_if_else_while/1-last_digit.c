#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0)); /* Seed for generating random numbers */
	n = rand() - RAND_MAX / 2;
	/* Generate a random number between -RAND_MAX/2 and RAND_MAX/2 */

	int last_digit = abs(n % 10); /* Calculate the last digit of n */

	printf("Last digit of %d is ", n);
	if (n < 0)
	{
		printf("%d and is less than 6 and not 0\n", -last_digit);
	}
	else if (last_digit > 5)
	{
		printf("%d and is greater than 5\n", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("%d and is 0\n", last_digit);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", last_digit);
	}

	return (0);
}
