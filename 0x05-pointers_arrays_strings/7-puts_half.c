#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *  puts_half - print half of puts
 *  @str: variable tha will split
 */
void puts_half(char *str)
{
unsigned long int i = 0;
char *temp = str;
if ((strlen(str) % 2) == 0)
{
temp += (strlen(str) / 2);
for (i = (strlen(str) / 2); i < (strlen(str)); i++)
{
putchar(*temp);
temp++;
}
}
else
{
temp += ((strlen(str) + 1) / 2);
for (i = ((strlen(str) + 1) / 2); i < (strlen(str)); i++)
{
putchar(*temp);
temp++;
}
}
putchar('\n');
}
