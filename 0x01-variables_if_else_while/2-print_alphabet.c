#include<stdio.h>
/**
 * main - entry point
 *
 * Return: equal 0
*/
int main(void)
{
char x;
if (x >= 65 && x <= 90)
{
x += 32;
}
putchar(x);
printf("\n");
return (0);
}
