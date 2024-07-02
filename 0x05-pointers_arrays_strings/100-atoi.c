#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * 
 * Return: the integer value of the converted string
 */
int _atoi(char *s)
{
    int i = 0, sign = 1;
    unsigned int num = 0;
    int has_started = 0;

    while (s[i])
    {
        if (s[i] == '-')
            sign *= -1;
        while (s[i] >= '0' && s[i] <= '9')
        {
            has_started = 1;
            num = (num * 10) + (s[i] - '0');
            i++;
        }
        if (has_started == 1)
            break;
        i++;
    }

    return (num * sign);
}
