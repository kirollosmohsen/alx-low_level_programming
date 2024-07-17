#include "main.h"
/**
 * create_array - first task 0x0b
 * @size: dkjdkjkjkldk
 * @c: kjdkjdkljdlld
 * Return: always 0
 */

char *create_array(unsigned int size, char c)
{
unsigned long int i;
char *x = (char *)malloc(size * sizeof(char));
if (size == 0)
{
return (NULL);
}
if (x == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
x[i] = c;
}
}
return (x);
}
