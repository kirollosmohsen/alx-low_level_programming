#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * print_rev - function to print even
 * @s: char that inserted 
 */
void print_rev(char *s)
{
int i = 0;
char *temp = s;
for (i = 0; i <= (strlen(s) - 1); i += 2)
{
putchar(*temp);
temp += 2;
}
}

