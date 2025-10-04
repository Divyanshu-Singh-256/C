//WAP to select a candidate based on height and age. Define a user defined function and set conditions where age is <25 and height > 5 foot.
#include <stdio.h>
void selectCandidate(int age, float height) {
    if (age < 25 && height > 5.0) {
        printf("Candidate is selected.\n");
    } else {
        printf("Candidate is not selected.\n");
    }
}
int main() {
    int age;
    float height;

    printf("Enter age of candidate: ");
    scanf("%d", &age);
    printf("Enter height of candidate (in feet): ");
    scanf("%f", &height);

    selectCandidate(age, height);

    return 0;
}
