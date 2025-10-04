//take input and print name roll no(Sap id) and address
#include <stdio.h>
int main(){
    printf("Enter your name: ");
    char name[50];
    fgets(name, sizeof(name), stdin);
    printf("Enter your roll no (Sap id): ");
    char rollno[20];
    fgets(rollno, sizeof(rollno), stdin);
    printf("Enter your address: ");
    char address[100];
    fgets(address, sizeof(address), stdin);
    printf("\nName: %s\nRoll No (Sap id): %s\nAddress: %s", name, rollno, address);
    return 0;



}