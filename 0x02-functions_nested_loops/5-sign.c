#include "main.h"

/**
 * print_sign - print alphabet
 *
 * @n: lowwwer
 *
 * Return: always 0, 1 sumstiem, -1 negative
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
