#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate sum
    sum = num1 + num2;

    // Output the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    return 0;
}

