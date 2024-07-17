#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *str_concat(char *s1, char *s2)
{
unsigned long int x = 0;
char *m1;
char *m2;
unsigned long int z1 = (strlen(s1) + 1) ;
unsigned long int z2 = (strlen(s2) + 1);
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
for (x = 0; x < z1; x++)
{
	m1[i] = s1[i];
}
for (x = 0; x < z1; x++)
{
        m2[i] = s2[i];
}
return (m1);
return (m2);

} 
