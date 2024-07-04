Here's the code formatted according to the Betty coding style guidelines and without spaces at the start of each line:

```c
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
for (i = 48; i < 58; i++)
{
for (x = 48; x < 58; x++)
{
if (i != x && x > i)
{
putchar(i);
putchar(x);
if (i != 56 || x != 57)  // To avoid printing comma and space after the last pair
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
