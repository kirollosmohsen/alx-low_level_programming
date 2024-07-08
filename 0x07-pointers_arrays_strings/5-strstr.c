#include "main.h"
#include <stddef.h> /* Include for NULL */

/**
*_strstr - locates a substring
*@haystack: the string to be searched
*@needle: the substring to locate
*Return: pointer to the beginning of the located substring,
*or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
char *h, *n;
if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
h = haystack;
n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
