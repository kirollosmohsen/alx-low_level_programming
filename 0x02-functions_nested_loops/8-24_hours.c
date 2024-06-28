#include "main.h"
/**
* jack_bauer - give time at 24 hour
* Return: always 0
*/

void jack_bauer(void)
{
int b = 0, c = 0, d = 0;
for (b = 0; b <= 23; b++)
{
for (c = 0; c <= 5; c++)
{
for (d = 0; d <= 9; d++)
{
printf("%02d:%d%d\n", b, c, d);
}
}
}
return (0);
}
