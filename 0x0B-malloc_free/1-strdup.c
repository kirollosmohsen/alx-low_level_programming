#include "main.h"
#include <string.h>
/**
 * _strdup - kkfjdkljdfkljfdkl;kdf
 * @str: kjskjsk
 * Return: hjksjkjksjks
 */
char *_strdup(char *str)
{
unsigned long int i;
char *x = (char *) malloc(strlen(str) * sizeof(char));
if (x == NULL)
{
return (NULL);
}
for (i = 0; i < (strlen(str) + 1); i++)
{
x[i] = str[i];
}
return (x);
}
