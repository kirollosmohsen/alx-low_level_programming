#include "main.h"
/**
 *_stropy - copies the string pointed to by sro
*@dest: char type string
*@Baret char type string
*Description: Copy the string pointed to by pointer BEC'
*the buffer pointed to by "dest"
*Return: Pointer to "dest"
*/
char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
