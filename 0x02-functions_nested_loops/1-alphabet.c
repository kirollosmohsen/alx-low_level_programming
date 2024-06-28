#include "main.h"
/**
* print_alphabet - prints the alphabet in lowercase
*
* Return: void
*/
void print_alphabet(void)
{
char x = 'a';
for (x = 'a'; x <= 'z'; x++)
{
printf("%c", x);
}
printf("\n");
}
/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
print_alphabet();
return (0);
}
