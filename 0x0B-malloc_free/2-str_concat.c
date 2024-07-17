#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated space in memory,
 *         which contains the contents of s1 followed by s2 and null-terminated.
 *         Returns NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int i, j, len1 = 0, len2 = 0;

if (s1 != NULL)
for (len1 = 0; s1[len1]; len1++)
;

if (s2 != NULL)
for (len2 = 0; s2[len2]; len2++)
;

concat = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];

for (j = 0; j < len2; j++)
concat[i + j] = s2[j];

concat[i + j] = '\0';

return (concat);
}
