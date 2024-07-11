#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * puts2 - function to print even
 * @s: char that inserted
 */
void puts2(char *s)
{
unsigned long int i = 0;
while (s[i] != '\0')
{
if (s[i] % 2 == 0)
{
putchar(s[i]);
}
i++;
}
putchar('\n');
}
