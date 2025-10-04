//WAP to find if a given number is a palindrome (reverse). Use function palindrome or reverse.
#include <stdio.h>
int palindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }
    return 0;
}
int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    palindrome(number);

    return 0;
}