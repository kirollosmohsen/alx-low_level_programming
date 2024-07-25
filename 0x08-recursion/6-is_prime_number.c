#include "mai.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * is_prime_number - jksjkjsksks
 * @n: kkjdksjkd
 * Return: kjkjfkjkfj
 */
int is_prime_number(int n)
{
int i = 0;
if (n <= 1)
{
return (0);
}
if (n == 2)
{
return (1);
}
if (n % 2 == 0)
{
return (0);
}
int limit = (int)sqrt(n);
for (i = 3; i <= limit; i += 2)
{
if (n % i == 0)
{
return (0);
}
}
return (1);
}
