#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The times table to print (0 <= n <= 15).
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int i, j;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (j == 0)
                _putchar('0');  // Print leading zero for the first column
            else
                printf(",%4d", i * j);  // Print each multiplication result, right-aligned
        }
        _putchar('\n');
    }
}
