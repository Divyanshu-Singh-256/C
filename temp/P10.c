//wap to print grades obtained by a student using uf else an switch case . only 3 grades A B C
#include <stdio.h>
int main() {
    char grade;
    printf("Enter the grade (A, B, or C): ");
    scanf(" %c", &grade);
    if (grade == 'A') {
        printf("Excellent!\n");
    } 
    else if (grade == 'B') {
        printf("Well done!\n");
    } 
    else if (grade == 'C') {
        printf("Good!\n");
    } 
    else {
        printf("Invalid grade!\n");
    }
    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Well done!\n");
            break;
        case 'C':
            printf("Good!\n");
            break;
        default:
            printf("Invalid grade!\n");
            break;
    }
    return 0;
}