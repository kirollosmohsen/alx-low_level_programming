#include "main.h"
#include <ctype.h>
/**
 * _islower - print alphabet
 *
 * @c: lowwwer
 *
 * Return: always 0, 1 sumstiem
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
