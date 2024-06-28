#include <stdio.h>
#include "main.h"

/**
 * is_leap_year - checks if a year is a leap year
 * @year: year to check
 * Return: 1 if leap year, 0 if not
 */
int is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}

/**
 * convert_day - converts day of month to day of year, accounting for leap year
 * @month: month in number format
 * @day: day of month
 * @leap_year: 1 if it's a leap year, 0 if not
 * Return: day of year
 */
int convert_day(int month, int day, int leap_year)
{
    switch (month)
    {
        case 1:
            return day;
        case 2:
            return (31 + day);
        case 3:
            return (59 + day + leap_year);
        case 4:
            return (90 + day + leap_year);
        case 5:
            return (120 + day + leap_year);
        case 6:
            return (151 + day + leap_year);
        case 7:
            return (181 + day + leap_year);
        case 8:
            return (212 + day + leap_year);
        case 9:
            return (243 + day + leap_year);
        case 10:
            return (273 + day + leap_year);
        case 11:
            return (304 + day + leap_year);
        case 12:
            return (334 + day + leap_year);
        default:
            return -1; // Error case
    }
}

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
    int leap_year = is_leap_year(year);

    if (month < 1 || month > 12 || day < 1 || day > 31)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    if (leap_year && month >= 3)
    {
        if (day > (59 + leap_year)) // 59 days in year for Feb and 1st Mar, 60 days for 2nd Mar
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 366 - day);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
    else
    {
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 365 - day);
    }
}
