/* 11-print_times_table.c */
#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: times table to print (0 <= n <= 15)
 */
void print_times_table(int n)
{
int row, column;

if (n >= 0 && n <= 15)
{
for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
int result = row * column;
if (column == 0)
printf("%d", result);
else
printf(", %d", result);
}
printf("\n");
}
}
}
