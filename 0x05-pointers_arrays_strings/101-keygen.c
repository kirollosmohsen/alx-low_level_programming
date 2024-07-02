#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a valid password for 101-crackme
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
    int sum = 0;
    char password[64];
    int i = 0;
    int random_char;

    srand(time(NULL));

    while (sum < 2772 - 127)
    {
        random_char = rand() % 126 + 1;
        password[i++] = random_char;
        sum += random_char;
    }

    password[i++] = 2772 - sum;
    password[i] = '\0';

    printf("%s", password);

    return (0);
}
