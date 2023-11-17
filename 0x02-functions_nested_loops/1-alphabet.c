#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - use to print alphapitic
 *
 */
void print_alphabet(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
printf("%c", x);
}
}
/**
 * main - entry point
 *
 * Return: alwayes 0
 */
int main(void)
{
print_alphabet();
printf("\n");
return (0);
}
