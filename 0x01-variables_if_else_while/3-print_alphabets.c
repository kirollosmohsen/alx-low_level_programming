#include <stdio.h>
/**
* main - entry point of the program
*
* Return: always 0
*/
int main(void)
{
int i;
for (i = 97; i < 123; i++)
{
putchar(i);
}
for (i = 65; i < 91; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
