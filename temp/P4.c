//armstrong number
#include <stdio.h>
int main() {
    int num, digit, sum = 0;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    int temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += (digit * digit * digit);
        temp /= 10;
    }
    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } 
    else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}