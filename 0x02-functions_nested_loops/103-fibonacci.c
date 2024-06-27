#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued
 * Fibonacci terms below 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	int first = 1, second = 2, next;

	while (second < 4000000)
	{
		if (second % 2 == 0)
			sum += second;

		next = first + second;
		first = second;
		second = next;
	}

	printf("%d\n", sum);

	return (0);
}
