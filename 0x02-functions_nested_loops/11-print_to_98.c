#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
    int i;  // Declare loop variable here

    if (n <= 98)
    {
        printf("%d", n);
        for (i = n + 1; i <= 98; i++)
        {
            printf(", %d", i);
        }
    }
    else
    {
        printf("%d", n);
        for (i = n - 1; i >= 98; i--)
        {
            printf(", %d", i);
        }
    }
    printf("\n");
}
