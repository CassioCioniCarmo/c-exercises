/**
    Exercise - 3: Print temperatures in Celsius and Fahrenheit
    
    Cassio Cioni Carmo - 04/23/2024
**/

#include <stdio.h>

#define LOWERLIMIT -150
#define UPPERLIMIT 200
#define STEPSIZE 25
#define ARRAYSIZE (UPPERLIMIT - LOWERLIMIT) / STEPSIZE

void converFahrenheitCelsius(float celsiusTemps[], const float fahrTemps[]);
void printTemperatures(const float celsiusTemps[], const float fahrTemps[]);

int main() 
{
    float tempCelsius[ARRAYSIZE];
    float tempFahr[ARRAYSIZE];

    printf("%d\n", ARRAYSIZE);

    for (size_t i = 0; i < ARRAYSIZE; i++)
    {
        tempFahr[i] = (float)LOWERLIMIT + (STEPSIZE * i);
    }
    converFahrenheitCelsius(tempCelsius,tempFahr);

    printTemperatures(tempCelsius, tempFahr);
    
    return 0;
}

void converFahrenheitCelsius(float celsiusTemps[], const float fahrTemps[])
{
    for (size_t i = 0; i < ARRAYSIZE; i++)
    {
        celsiusTemps[i] = 5 * (fahrTemps[i] - 32) / 9;
    }
}

void printTemperatures(const float celsiusTemps[], const float fahrTemps[])
{
    printf("Celsius\t\tFahrenheit\n");
    for (size_t i = 0; i < ARRAYSIZE; i++)
    {
        printf("%3.2f\t\t%3.2f\n", celsiusTemps[i], fahrTemps[i]);
    }
}
