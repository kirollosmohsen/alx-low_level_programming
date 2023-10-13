#include "main.h"
/**
*print - numbers- print 0 - 9
*only using putchar twice
*Return: Always 0 (Success)
*/
void print numbers (void)
{
int num = 0;
do {
_putchar (num +48);
num++;
} while (num >= 0 && num <= 9);
putchar('\n');
}
