void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int i, j; // Move the variable declarations to the beginning

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            int result = i * j;

            if (j == 0)
                _putchar('0');  // Print leading zero for the first column
            else
                printf(", %3d", result);  // Print formatted result with three spaces
        }
        _putchar('\n');
    }
}
