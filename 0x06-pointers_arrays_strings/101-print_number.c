#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 * Description: This function prints an integer using only the _putchar function.
 * It can handle both positive and negative integers.
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
