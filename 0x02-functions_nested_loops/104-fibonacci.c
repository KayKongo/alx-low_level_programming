#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0 on success
 */
int main()
{
    int fib1 = 1, fib2 = 2, fib3, count = 0;

    printf("%d, %d, ", fib1, fib2);
    count += 2;

    while (count < 98)
    {
        fib3 = fib1 + fib2;
        printf("%d", fib3);
        count++;

        if (count != 98)
            printf(", ");

        fib1 = fib2;
        fib2 = fib3;
    }

    printf("\n");

    return 0;
}
