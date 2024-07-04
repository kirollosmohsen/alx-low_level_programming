#include <stdio.h>
/**
* main - entry point of the program
*
* Return: always 0
*/
int main(void)
{
int i;
int x;
int z;
for (i = 48; i < 58; i++)
{
for (x = 48; x < 58; x++)
{
for (z = 48; z < 58; z++)
{
if (i != x && x != z && (x > i) && (z > x && z > i))
{
putchar(i);
putchar(x);
putchar(z);
if (i != 55 || x != 56 || z != 57)
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
