#include <stdio.h>
int main() {
    int i, choice;
    printf("Which loop do you want to use?\n");
    printf("1. For loop\n");
    printf("2. While loop\n");
    printf("3. Do-while loop\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Using for loop:\n");
        for (i = 1; i <= 100; i++) {
            printf("%d ", i);
        }
    }
    else if (choice == 2) {
        printf("Using while loop:\n");
        i = 1;
        while (i <= 100) {
            printf("%d ", i);
            i++;
        }
    }
    else if (choice == 3) {
        printf("Using do-while loop:\n");
        i = 1;
        do {
            printf("%d ", i);
            i++;
        } while (i <= 100);
    }
    else {
        printf("Invalid choice!\n");
    }
    
    printf("\n");
    return 0;
}
