#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int total = 0;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			total += i;
	}
	printf("%d\n", total);

	return (0);
}
