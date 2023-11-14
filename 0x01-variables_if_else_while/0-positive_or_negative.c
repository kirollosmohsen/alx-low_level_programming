#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: 0
*/
int main(void)
{
long int x;
srand(time(0));
x = rand() - RAND_MAX / 2;
if (x > 0)
{
printf("%ld is positive\n", x);
}
else if (x < 0)
{
printf("%ld is negative\n", x);
}
else
printf("%ld is zero\n", x);
return (0);
}
