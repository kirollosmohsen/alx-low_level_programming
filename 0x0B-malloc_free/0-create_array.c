#include "main.h"
#include <stdio.h>
/**
 * create_array - jhjhdjhjhd
 * @size: dhdhdkddss
 * @c: khskhkshkshsh
 * Return: always to zero
 */
char *create_array(unsigned int size, char c)
{
unsigned long int = 0;
char *ptr;
ptr = (char *)malloc(size * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
else if (ptr == 0)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
}
return (ptr);
}
