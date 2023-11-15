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
char x = 'a';
while (x <= 'f')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
