#include <stdio.h>

int main() {
    int num, i = 2;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while (i <= num / 2) {
        if (num % i == 0) {
            printf("The number %d is not a prime number.\n", num);
            return 0;
        }
        i++;
    }
    printf("The number %d is a prime number.\n", num);

    return 0;
}
