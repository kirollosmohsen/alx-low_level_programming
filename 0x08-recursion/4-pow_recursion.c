#include <stdlib.h>
#include <math.h>
#include "main.h"
/**
 *  _pow_recursion - kkdhdkhdkd
 *  @x:lkslkslsk
 *  @y: lslksksloks
 *  Return: Sumkjfkjk
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
