#include "main.h"
/**
 * _strdup - kkfjdkljdfkljfdkl;kdf
 * @str: kjskjsk
 * Return: hjksjkjksjks
 */
char *_strdup(char *str)
{
int i;
char *x = malloc(strlen(str) * sizeof(char));
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < strlen(str); i++)
{
x[i] = str[i];
}
return (printf("%s", x));
}
