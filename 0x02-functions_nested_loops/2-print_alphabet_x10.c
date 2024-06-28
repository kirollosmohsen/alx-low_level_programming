#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 *
 * mian - entry point
 *
 * RETURN: always 0
*/
void print_alphabet_x10(void);
{
char x = 97;
int i;
for(i = 0; i < 10; i++)
{
for (x = 97; x < 123; x++)
{
printf("%c", x);
}
printf("\n");
}
}
