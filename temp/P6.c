//wap to print all even and odd numbers between 1 to 100
#include <stdio.h>
int main() {
    int i;
    printf("Even numbers between 1 and 100:\n");
    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\nOdd numbers between 1 and 100:\n");
    for (i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}