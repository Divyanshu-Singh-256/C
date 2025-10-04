//wap to compute positie , negative and zeroes from input of n numbers
#include <stdio.h>
int main() {
    int n, i, num;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    printf("Enter the number of integers you want to input: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &num);
        if (num > 0) {
            positiveCount++;
        } 
        else if (num < 0) {
            negativeCount++;
        } 
        else {
            zeroCount++;
        }
    }
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Zeroes: %d\n", zeroCount);
    return 0;
}