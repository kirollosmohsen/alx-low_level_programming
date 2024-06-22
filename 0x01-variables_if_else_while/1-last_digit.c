#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 980; /* Example value, you can modify this to test different cases */

	printf("Last digit of %d is %d ", n, n % 10);

	if ((n % 10) > 5)
	{
		printf("and is greater than 5\n");
	}
	else if ((n % 10) < 5)
	{
		printf("and is less than 5\n");
	}
	else
	{
		printf("and is 0\n");
	}

	return (0);
}
