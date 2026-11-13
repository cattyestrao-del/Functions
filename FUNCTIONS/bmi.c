#include <stdio.h>

// 1. Function Prototypes
double calculateBMI(double weight, double height);
const char* getBMICategory(double bmi);

int main() {
    double weight, height, bmi;

    printf("Enter weight in kg: ");
    scanf("%lf", &weight);

    printf("Enter height in meters: ");
    scanf("%lf", &height);

    // 2. Call the calculation function
    bmi = calculateBMI(weight, height);

    // 3. Call the categorization function
    const char* category = getBMICategory(bmi);

    // 4. Print results (matching the sample run format)
    printf("BMI: %.2lf\n", bmi);
    printf("Category: %s\n", category);

    return 0;
}

// Function 1: Computes and returns the BMI value
double calculateBMI(double weight, double height) {
    return weight / (height * height);
}

// Function 2: Evaluates the BMI and returns the category string
const char* getBMICategory(double bmi) {
    if (bmi < 18.5) {
        return "Underweight";
    } 
    else if (bmi < 25.0) {
        return "Normal";
    } 
    else if (bmi < 30.0) {
        return "Overweight";
    } 
    else {
        return "Obese";
    }
}