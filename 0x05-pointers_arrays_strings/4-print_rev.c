#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_rev - function to print reversed
 * @s: variable to print string
 */
void print_rev(char *s)
{
	char *temp = s;
	int i;

	temp += (strlen(s));

	for (i = strlen(s); i > 0; i--)

	{
		putchar(*temp);
		temp--;
	}
}
