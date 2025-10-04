//wap to illustrate the use of break and continue and return statements
#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Skipping number 5 using continue statement.\n");
            continue; 
        }
        if (i == 8) {
            printf("Breaking the loop at number 8 using break statement.\n");
            break; 
        }
        printf("Current number: %d\n", i);
    }
    printf("Loop ended. Now demonstrating return statement.\n");
    return 0;
}