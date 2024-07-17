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
if (str == NULL)
{
return (NULL);
}
char *x = (char *) malloc((strlen(str) + 1) * sizeof(char));
if (x == 0)
{
return (NULL);
}
for (i = 0; i < (strlen(str) + 1); i++)
{
x[i] = str[i];
}
return (x);
}
