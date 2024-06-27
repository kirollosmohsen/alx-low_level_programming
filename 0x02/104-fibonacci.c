#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, separated by comma and space
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long int first = 1, second = 2, next;

	printf("%lu, %lu", first, second);

	for (count = 3; count <= 98; count++)
	{
		next = first + second;
		printf(", %lu", next);
		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}
