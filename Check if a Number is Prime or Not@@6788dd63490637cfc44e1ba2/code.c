#include <stdio.h>
#include <math.h>  // Include math.h for the sqrt function

int main() {
    int a;
    scanf("%d", &a);  // Read input number
    
    // Handle small cases
    if (a <= 1) {
        printf("Not Prime\n");
    } else {
        int isPrime = 1;  // Assume the number is prime
        
        // Loop from 2 to sqrt(a) to check for factors
        for (int i = 2; i * i <= a; i++) {
            if (a % i == 0) {  // If divisible by any i, it's not prime
                isPrime = 0;
                break;  // No need to check further
            }
        }
        
        if (isPrime) {
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    }
    
    return 0;
}
