#include "main.h"
#include <string.h>
/**
 * str_concat - kjdssjks
 * @s1: kkjkdkjkdjd
 * @s2: kjdkjdkjd
 * Return: kdklkdkjddjl
 */
char *str_concat(char *s1, char *s2)
{
unsigned long int i;
unsigned long int x1 = strlen(s1);
unsigned long int x2 = strlen(s2);
unsigned long int x3 = strlen(s1) + strlen(s2);
char *ptr;
if (s1 == NULL)
{
return (NULL);
}
if (s2 == NULL)
{
return (NULL);
}
ptr = (char *)malloc(x3 * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < x3 + 1; i++)
{
if (i < x1)
{
ptr[i] = s1[i];
}
else
{
ptr[i] = s2[i - x1];
}
}
return (ptr);
}
