#include <stdio.h>

int main(void)
{
int num1, num2;

for (num1 = 0; num1 <= 99; num1++)
{
for (num2 = num1 + 1; num2 <= 99; num2++)
{
// Print num1 (first two-digit number)
putchar(num1 / 10 + '0');
putchar(num1 % 10 + '0');
putchar(' ');

// Print num2 (second two-digit number)
putchar(num2 / 10 + '0');
putchar(num2 % 10 + '0');

// Check if it's not the last combination
if (num1 != 98 || num2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return 0;
}
