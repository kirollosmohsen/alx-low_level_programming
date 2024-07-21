#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars and initializes it with a specific char
 * @size: The size of the array
 * @c: The char to initialize the array with
 *
 * Return: A pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
unsigned int x;
char *ptr;

if (size == 0)
{
return (NULL);
}

ptr = malloc(size * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}

for (x = 0; x < size; x++)
{
ptr[x] = c;
}

return (ptr);
}
