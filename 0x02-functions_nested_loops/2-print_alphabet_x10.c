#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 *
 * mian - entry point
 *
 * RETURN: always 0
*/
void print_alphabet(void)
{
char x = 97;
for(int i = 0; i < 10; i++)
{
for (x = 97; x < 123; x++)
{
printf("%c", x);
}
printf("\n");
}
}
