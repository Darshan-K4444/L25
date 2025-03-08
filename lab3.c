#include <stdio.h>

int main() {
    int num, factorial = 1;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate factorial
    for(int i = 1; i <= num; i++) {
        factorial *= i;
    }

    // Output the result
    printf("Factorial of %d is %d\n", num, factorial);
    return 0;
}

