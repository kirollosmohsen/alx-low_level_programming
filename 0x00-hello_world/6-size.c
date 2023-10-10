#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program for print size of data type using sizeof function
 *
 * Return: Always 0 (success)
*/

int main(void)
{
    printf(" Size of a char: %u", sizeof(char));
    printf(" byte(s)\n");
    printf(" Size of an int: %u", sizeof(int));
    printf(" byte(s)\n");
    printf(" Size of a long int: %u", sizeof(long int));
    printf(" byte(s)\n");
    printf(" Size of a long long int: %u", sizeof(long long int));
    printf(" byte(s)\n");
    printf(" Size of a float: %u", sizeof(float));
    printf(" byte(s)\n");
}
