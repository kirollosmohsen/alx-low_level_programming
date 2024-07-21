#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if insufficient memory
 *         was available or if str is NULL.
 */
char *_strdup(char *str)
{
unsigned long int x;
char *ptr;

if (str == NULL)
{
return (NULL);
}

ptr = malloc((strlen(str) + 1) * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}

for (x = 0; x <= strlen(str); x++)
{
ptr[x] = str[x];
}

return (ptr);
}
