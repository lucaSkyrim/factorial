#include <stdio.h>

int main() {
    int n, temp;
    int result = 1;  // accumulator

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;  

    while(temp > 1) {
        result *= temp;  // multiply the accumulator
        temp--;          // decrement until 1
    }

    printf("The factorial of %d is %d\n", n, result);

    return 0;
}
