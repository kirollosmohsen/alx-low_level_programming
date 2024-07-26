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
long unsigned int i = 0;
if (str == NULL)
{
return (NULL);
}
long int x = strlen(str);
ptr = (char *)malloc(x * sizeof(char) + 1);
if (ptr == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < strlen(str); i++)
{
	ptr[i] = str[i];
}
}
return (ptr);
}
