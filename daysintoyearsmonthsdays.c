#include <stdio.h>
int main() { 
    int days, years, months, remaining_days , extra;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365; 
    extra = days % 365; 
    months = extra / 30; 
    remaining_days = extra % 30;

    printf("%d days is %d years(not a leap year(assumption)), %d months, and %d days.\n", days, years, months, remaining_days);

    return 0;
    
}

