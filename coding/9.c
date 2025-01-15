#include <stdio.h>

int isBinary(int num) {
    while (num != 0) {
        if (num % 10 > 1) {
            return 0; // Not a binary number
        }
        num /= 10;
    }
    return 1; // Binary number
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isBinary(num)) {
        printf("%d is a binary number.\n", num);
    } else {
        printf("%d is not a binary number.\n", num);
    }

    return 0;
}
