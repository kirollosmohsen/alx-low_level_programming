#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number = 0;

while (number < 10)
{
putchar(number + '0');  /* ASCII value for '0' is 48 */
number++;
}
putchar('\n');

return (0);
}
