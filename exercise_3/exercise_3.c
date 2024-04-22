/**
    Exercise - 2: Print temperatures in Celsius and Fahrenheit
    
    Cassio Cioni Carmo - 04/21/2024
**/

#include <stdio.h>

int main() 
{
    float tempFahr, tempCelsius;
    int lowerLimit, upperLimit, stepSize;

    lowerLimit = -150;
    upperLimit = 200;
    stepSize = 25;

    tempCelsius = lowerLimit;

    printf("tCelsius\tFahrenheit\n");

    while (tempCelsius <= upperLimit)
    {
        tempFahr = ((9.00/5.00) * tempCelsius) + 32.00;
        printf("%4.2f\t\t%4.2f\n", tempCelsius, tempFahr);
        tempCelsius += stepSize;
    }
    
    return 0;
}