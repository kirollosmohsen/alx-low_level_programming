#include<stdio.h>
/**
 * main - entry point
 *
 * Return: equal 0
*/
int main(void)
{
int i = 0;
while (i < 10)
{

putchar(i + '0');
i++;
}
int x = 97;
while (x >= 97 && x <= 102)
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
