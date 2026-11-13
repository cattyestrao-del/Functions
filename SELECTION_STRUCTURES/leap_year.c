#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        // Rule 3: If it's divisible by 400, it IS a leap year (e.g., 2000)
        printf("%d IS a leap year.\n", year);
    } 
    else if (year % 100 == 0) {
        // Rule 2: If it's divisible by 100 (but failed 400), it is NOT a leap year (e.g., 1900)
        printf("%d is NOT a leap year.\n", year);
    } 
    else if (year % 4 == 0) {
        // Rule 1: If it's divisible by 4 (and failed the century checks), it IS a leap year (e.g., 2024)
        printf("%d IS a leap year.\n", year);
    } 
    else {
        // Otherwise, it's a common year
        printf("%d is NOT a leap year.\n", year);
    }

    return 0;
}