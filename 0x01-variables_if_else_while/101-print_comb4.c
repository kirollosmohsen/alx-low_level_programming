#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int hundreds, tens, ones;

hundreds = 0;
while (hundreds <= 9)
{
tens = hundreds + 1;
while (tens <= 9)
{
ones = tens + 1;
while (ones <= 9)
{
putchar(hundreds + '0');
putchar(tens + '0');
putchar(ones + '0');

if (!(hundreds == 7 && tens == 8 && ones == 9))
{
putchar(',');
putchar(' ');
}
ones++;
}
tens++;
}
hundreds++;
}
putchar('\n');

return (0);
}
