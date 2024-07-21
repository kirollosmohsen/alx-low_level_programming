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
char *ptr;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
ptr = (char *)malloc((strlen(s1) + strlen(s2)) * sizeof(char) + 1);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < (strlen(s1) + strlen(s2)) + 1; i++)
{
if (i < strlen(s1))
{
ptr[i] = s1[i];
}
else
{
ptr[i] = s2[i - strlen(s1)];
}
}
return (ptr);
}
