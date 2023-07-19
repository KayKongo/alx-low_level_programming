#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 5000

void add_strings(char result[], const char str1[], const char str2[]) {
    int carry = 0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int max_len = len1 > len2 ? len1 : len2;

    for (int i = 0; i < max_len || carry; i++) {
        int digit1 = i < len1 ? str1[len1 - 1 - i] - '0' : 0;
        int digit2 = i < len2 ? str2[len2 - 1 - i] - '0' : 0;
        int sum = digit1 + digit2 + carry;

        result[max_len - i] = sum % 10 + '0';
        carry = sum / 10;
    }

    result[max_len + 1] = '\0';
}

int main(void) {
    char fib1[MAX_LENGTH];
    char fib2[MAX_LENGTH];
    char temp[MAX_LENGTH];

    strcpy(fib1, "1");
    strcpy(fib2, "2");

    printf("%s, %s", fib1, fib2);

    for (int i = 0; i < 96; i++) {
        add_strings(temp, fib1, fib2);
        strcpy(fib1, fib2);
        strcpy(fib2, temp);
        printf(", %s", fib2);
    }

    printf("\n");
    return 0;
}
