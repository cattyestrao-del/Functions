#include <stdio.h>

int main() {
    double weight, height, bmi;

    // Get user input for weight and height
    printf("Enter weight in kg: ");
    scanf("%lf", &weight);

    printf("Enter height in meters: ");
    scanf("%lf", &height);

    // Calculate BMI: weight / (height * height)
    bmi = weight / (height * height);

    // Print BMI rounded to 2 decimal places
    printf("BMI: %.2lf\n", bmi);

    // Categorize using an if-else-if chain
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } 
    else if (bmi < 25.0) {
        printf("Category: Normal\n");
    } 
    else if (bmi < 30.0) {
        printf("Category: Overweight\n");
    } 
    else {
        printf("Category: Obese\n");
    }

    return 0;
}