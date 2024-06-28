#include "main.h"

/**
 * times_table - task 9 kdkd
 * Return: void
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
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
