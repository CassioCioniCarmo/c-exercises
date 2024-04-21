/**
    Exercise - 2: Print temperatures in Fahrenheit and Celsius
    
    Cassio Cioni Carmo - 04/21/2024
**/

#include <stdio.h>

int main() 
{
    int tempFahr, tempCelsius;
    int lowerLimit, upperLimit, stepSize;

    lowerLimit = -459;
    upperLimit = 250;
    stepSize = 25;

    tempFahr = lowerLimit;

    printf("Fahrenheit\tCelsius\n");

    while (tempFahr <= upperLimit)
    {
        tempCelsius = 5 * (tempFahr - 32) / 9;
        printf("%d\t\t%d\n", tempFahr, tempCelsius);
        tempFahr += stepSize;
    }
    
    return 0;
}