#include <stdio.h>
#include "main.h"
/**
 * factorial - jhddddjdjd
 * @n: oidiudiuidu
 * Return: kjdkjdkd
 */
int factorial(int n)
{
long int sum = 1;
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
sum = +(n * factorial(n - 1));
}
return (sum);
}
