#include "main.h"

/**
 * times_table - task 9 kdkd
 * Return: void
 */
void times_table(void)
{
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			printf("%d", x * y);
			if (y < 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
