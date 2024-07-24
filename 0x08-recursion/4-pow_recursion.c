#include <stdlib.h>
#include <math.h>
#include "main.h"
int _pow_recursion(int x, int y)
{
int sum = 0;
if (y < 0)
{
return (-1);
}
else
{
sum = pow (x, y);
return (sum);
}
}
