#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - kjksjksjkjs
 * @str: jkhjkdjkhdkd
 * Return: hjkskjss
 */
char *_strdup(char *str)
{
char *ptr;
long int x = strlen(str);
ptr = (char *)malloc(x * sizeof(char) + 1);
if (str == NULL)
{
return (NULL);
}
else if (ptr == NULL)
{
return (NULL);
}
else
{
ptr = strdup(str);
}
return (ptr);
}
