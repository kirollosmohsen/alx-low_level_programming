#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int sign = 1, result = 0, i = 0;

while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign *= -1;
i++;
}

while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
{
result = result * 10 + (s[i] - '0');
i++;
}

return (result * sign);
}
