#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if str is NULL
 *         or an empty string or if the function fails.
 */
char **strtow(char *str)
{
char **words;
int i, j, k, len, word_count = 0;

if (str == NULL || *str == '\0')
return (NULL);

for (i = 0; str[i]; i++)
if ((str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')))
word_count++;

words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL || word_count == 0)
return (NULL);

for (i = 0, k = 0; i < word_count; i++)
{
while (str[k] == ' ')
k++;
for (len = 0; str[k + len] != ' ' && str[k + len]; len++)
;
words[i] = malloc(sizeof(char) * (len + 1));
if (words[i] == NULL)
{
for (j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
}
for (j = 0; j < len; j++)
words[i][j] = str[k++];
words[i][j] = '\0';
}
words[i] = NULL;

return (words);
}
