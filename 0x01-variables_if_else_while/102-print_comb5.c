#include <stdio.h>

/**
* main - entry point of the program
*
* Return: always 0
*/
int main(void)
{
int z;
int i;
int y;
int x;

for (i = 48; i < 58; i++)
{
for (x = 48; x < 58; x++)
{
for (z = i; z < 58; z++)
{
for (y = (x); y < 58; y++)
{

putchar(i);
putchar(x);
putchar(' ');
putchar(z);
putchar(y);

if (!(i == 57 && x == 56 && z == 57 && y == 57))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');

return (0);
}
