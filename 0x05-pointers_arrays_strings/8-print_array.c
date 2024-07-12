#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 *  print_array - print half of puts
 *  @a: variable tha will split
 *  @n: variable tha will split
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != (n - 1))
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
putchar('\n');
}
