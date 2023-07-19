#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 5000

void add_strings(char result[], const char str1[], const char str2[]) {
    // Function implementation (same as before)
}

int main(void) {
    int i;
    char fib1[MAX_LENGTH];
    char fib2[MAX_LENGTH];
    char temp[MAX_LENGTH];

    strcpy(fib1, "1");
    strcpy(fib2, "2");

    printf("%s, %s", fib1, fib2);

    for (i = 0; i < 96; i++) {
        add_strings(temp, fib1, fib2);
        strcpy(fib1, fib2);
        strcpy(fib2, temp);
        printf(", %s", fib2);
    }

    printf("\n");
    return 0;
}
