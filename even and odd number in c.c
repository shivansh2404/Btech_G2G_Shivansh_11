#include <stdio.h>

int main() {
    int num, even_count = 0, odd_count = 0;
    char choice;

    do {
        printf("Enter an integer: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }

        printf("Do you want to enter another number? (y/n): ");
        while (getchar() != '\n'); 
        scanf("%c", &choice);

    } while (choice == 'y' || choice == 'Y'); 

    printf("\nTotal even numbers entered: %d\n", even_count);
    printf("Total odd numbers entered: %d\n", odd_count);

    return 0;
}
