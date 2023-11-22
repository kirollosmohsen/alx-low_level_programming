#include "main.h"

/**
* _strcpy - Copies the string pointed to by src.
* @dest: Copy to.
* @src: Copy from.
*
* Return: String value.
*/
char *_strcpy(char *dest, char *src)
{
int a = 0;
int b = 0;

while (*(src + a) != '\0')
{
a++;
}

for (; b < a; b++)
{
dest[b] = src[b];
}

dest[a] = '\0';

return (dest);
}
