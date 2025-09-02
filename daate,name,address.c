#include <stdio.h>

int main() {
    char name[100];
    char dob[11];
    char address[200];

    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin);

    printf("Enter your date of birth (DD-MM-YYYY): \n");
    fgets(dob, sizeof(dob), stdin);

    printf("Enter your address:\n ");
    getchar();
    fgets(address, sizeof(address), stdin);

    printf("Your name is %s\n", name);
    printf("Your Date of Birth is %s\n", dob);
    printf("Your address is %s\n", address);

    return 0;
}
