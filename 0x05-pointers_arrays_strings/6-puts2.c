#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * puts2 - function to print even
 * @s: char that inserted 
 */
void puts2(char *s)
{
long int unsigned i = 0;
char *temp = s;
for (i = 0; i <= (strlen(s) - 1); i += 2)
{
putchar(*temp);
temp += 2;
}
}

