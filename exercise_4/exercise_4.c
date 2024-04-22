/**
    Exercise - 4: Print temperatures in Celsius and Fahrenheit
    
    Cassio Cioni Carmo - 04/21/2024
**/

#include <stdio.h>

#define LOWERLIMIT  -150
#define UPPERLIMIT  150
#define STEPSIZE    20

int main() 
{
    float tempFahr, tempCelsius;

    printf("Celsius\t\tFahrenheit\n");

    for (tempCelsius = UPPERLIMIT; tempCelsius > LOWERLIMIT; tempCelsius-=STEPSIZE)
    {
        tempFahr = ((9.00/5.00) * tempCelsius) + 32.00;
        printf("%4.2f\t\t%4.2f\n", tempCelsius, tempFahr);
    }

    return 0;
}