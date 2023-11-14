/**
 * main - entry point
 *
 * Return: 0
*/
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
long int x;
srand(time(0));
x = rand() - RAND_MAX / 2;
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
