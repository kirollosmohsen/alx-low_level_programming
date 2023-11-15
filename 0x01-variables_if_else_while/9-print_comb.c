#include<stdio.h>
/**
 * main - entry point
 *
 * Return: equal zero
*/
int main(void)
{
int x = 48;
while (x < 58)
{
putchar(x);
if (x >= 48 && x < 57)
{
putchar(',');
putchar(' ');
}
x++;
}
putchar('\n');
return (0);
}
