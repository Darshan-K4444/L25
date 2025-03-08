#include <stdio.h>

int main() {
    int num, isPrime = 1;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime
    for(int i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // Output the result
    if(num <= 1) {
        printf("%d is neither prime nor composite.\n", num);
    } else if(isPrime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

