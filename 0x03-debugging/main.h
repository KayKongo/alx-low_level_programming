#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * positive_or_negative - Prints whether the given integer is positive,
 *                         negative, or zero.
 * @i: The integer to be checked.
 *
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 *
 * struct format - Struct format
 *
 * @month: the month in number format
 * @day: the day of the month
 * @year: the year
 */
typedef struct format
{
    int month;
    int day;
    int year;
} Date;

int convert_day(int month, int day);
void print_remaining_days(int month, int day, int year);
int largest_number(int a, int b, int c);
void positive_or_negative(int i);

#endif /* MAIN_H */
