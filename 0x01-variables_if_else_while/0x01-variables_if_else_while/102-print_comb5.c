#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations
 *              of two two-digit numbers in ascending order,
 *              separated by a comma and a space,
 *              using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number1, number2;

	for (number1 = 0; number1 <= 99; number1++)
	{
		for (number2 = number1; number2 <= 99; number2++)
		{
			if (number1 != number2)
			{
				putchar(number1 / 10 + '0');
				putchar(number1 % 10 + '0');
				putchar(' ');
				putchar(number2 / 10 + '0');
				putchar(number2 % 10 + '0');

				if (number1 != 98 || number2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return 0;
}