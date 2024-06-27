#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    int count = 98;
    unsigned long first = 1, second = 2, next;
    int i;

    printf("%lu, %lu", first, second);

    for (i = 2; i < count; i++)
    {
        next = first + second;
        printf(", %lu", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
