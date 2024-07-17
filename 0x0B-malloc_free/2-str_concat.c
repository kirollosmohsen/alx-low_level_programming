#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *str_concat(char *s1, char *s2)
{
int x = 0;
char *m1;
char *m2;
int z1 = strlen(s1);
int z2 = strlen(s2);
if (s1 == NULL)
{
    return (NULL);
}
if (s2 == NULL)
{
    return (NULL);
}
m1 = (char *)malloc(z1 * sizeof(char));
m2 = (char *)malloc(z2 * sizeof(char));
return (m1);
return (m2);

} 
