#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    int count = 50;
    int first = 1, second = 2, next, i;

    printf("%d, %d", first, second);

    for (i = 2; i < count; i++)
    {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
