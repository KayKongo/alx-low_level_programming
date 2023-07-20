#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0 on success
 */
int main(void)
{
    int i;
    unsigned long a = 1, b = 2, c;

    printf("%lu, %lu", a, b);

    for (i = 2; i < 98; i++)
    {
        c = a + b;
        printf(", %lu", c);
        a = b;
        b = c;
    }

    printf("\n");

    return (0);
}
