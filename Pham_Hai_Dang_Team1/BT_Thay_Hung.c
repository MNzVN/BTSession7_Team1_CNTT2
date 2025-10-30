#include <stdio.h>

int main() {
    int choice;  // User's menu choice
    int n;       // Input number for each operation

    do {
        // ===== Display the menu =====
        printf("\n===== BASIC ARITHMETIC PROGRAM =====\n");
        printf("1. Sum of numbers from 1 to n\n");
        printf("2. Sum of even numbers from 1 to n\n");
        printf("3. Factorial of n\n");
        printf("4. Check if n is a prime number\n");
        printf("5. Check if n is a palindrome number\n");
        printf("6. Exit\n");
        printf("====================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                // ===== 1. Sum from 1 to n =====
                printf("Enter n (>0): ");
                scanf("%d", &n);

                if (n <= 0) {
                    printf("n must be greater than 0!\n");
                    break;
                }

                int sum = 0;
                for (int i = 1; i <= n; i++) {
                    sum += i;
                }
                printf("Sum from 1 to %d = %d\n", n, sum);
                break;
            }

            case 2: {
                // ===== 2. Sum of even numbers =====
                printf("Enter n (>0): ");
                scanf("%d", &n);

                if (n <= 0) {
                    printf("n must be greater than 0!\n");
                    break;
                }

                int sumEven = 0;
                for (int i = 2; i <= n; i += 2) {
                    sumEven += i;
                }
                printf("Sum of even numbers from 1 to %d = %d\n", n, sumEven);
                break;
            }

            case 3: {
                // ===== 3. Factorial of n =====
                printf("Enter n (>=0): ");
                scanf("%d", &n);

                if (n < 0) {
                    printf("n must be non-negative!\n");
                    break;
                }

                long long fact = 1;
                int i = 1;
                while (i <= n) {
                    fact *= i;
                    i++;
                }
                printf("%d! = %lld\n", n, fact);
                break;
            }

            case 4: {
                // ===== 4. Prime number check =====
                printf("Enter n (>1): ");
                scanf("%d", &n);

                if (n <= 1) {
                    printf("n must be greater than 1!\n");
                    break;
                }

                int isPrime = 1; // Assume n is prime
                for (int i = 2; i < n; i++) {
                    if (n % i == 0) {
                        isPrime = 0; // Not prime
                        break;
                    }
                }

                if (isPrime)
                    printf("%d is a PRIME number.\n", n);
                else
                    printf("%d is NOT a prime number.\n", n);
                break;
            }

            case 5: {
                // ===== 5. Palindrome check =====
                printf("Enter n (>0): ");
                scanf("%d", &n);

                if (n <= 0) {
                    printf("n must be greater than 0!\n");
                    break;
                }

                int original = n;
                int reversed = 0;
                do {
                    int digit = n % 10;
                    reversed = reversed * 10 + digit;
                    n /= 10;
                } while (n > 0);

                if (reversed == original)
                    printf("%d is a PALINDROME number.\n", original);
                else
                    printf("%d is NOT a palindrome number.\n", original);
                break;
            }

            case 6:
                // ===== 6. Exit =====
                printf("Goodbye! See you next time.\n");
                break;

            default:
                printf("Invalid choice! Please select 1–6.\n");
                break;
        }

    } while (choice != 6);

    return 0;
}

