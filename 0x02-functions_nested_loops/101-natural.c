#include <stdio.h>

int main(void)
{
    int sum = 0;

    for (int num = 0; num < 1024; num++)
    {
        if (num % 3 == 0 || num % 5 == 0)
        {
            sum += num;
        }
    }

    printf("%d\n", sum);

    return 0;
}
