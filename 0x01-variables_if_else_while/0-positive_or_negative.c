/**
 * main - entry point
 *
 * Return: 0
*/
#include<stdio.h>
int main(void)
{
long int x;
scanf("%ld", &x);
if (x > 0)
{
printf("%ld is positive", x);
}
else if (x < 0)
{
printf("%ld is negative", x);
}
else
printf("%ld is zero", x);
return (0);
}
