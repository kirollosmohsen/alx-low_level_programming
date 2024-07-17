#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
    char *concat;
    unsigned int len1, len2, i, j;

    len1 = (s1 != NULL) ? strlen(s1) : 0;
    len2 = (s2 != NULL) ? strlen(s2) : 0;

    concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (concat == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concat[i] = s1[i];
    for (j = 0; j < len2; j++)
        concat[len1 + j] = s2[j];

    concat[len1 + len2] = '\0';

    return (concat);
}
