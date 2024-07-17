#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *str_concat(char *s1, char *s2)
{
unsigned long int x = 0;
char *m1;
unsigned long int z1 = (strlen(s1));
unsigned long int z2 = (strlen(s2));
unsigned long int sum = (strlen(s1)+strlen(s2));

if (s1 == NULL)
{
    return (NULL);
}
if (s2 == NULL)
{
    return (NULL);
}
m1 = (char *)malloc(sum * sizeof(char));
if (m1 == NULL)
{
return NULL;
}
for (x = 0; x < z1; x++)
{
        m1[x] = s1[x];
}
for ( x = z1; x < z2 ; x++)
{
        m1[x] = s2[x];
}
return (m1);
}
