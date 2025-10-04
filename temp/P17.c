//wap to convert no. of days into years , months and days
#include <stdio.h>

int main() {
    int days, years, months;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;
    months = days / 30;
    days = days % 30;

    printf("%d days is approximately %d years, %d months, and %d days.\n", days, years, months, days);
    return 0;
}