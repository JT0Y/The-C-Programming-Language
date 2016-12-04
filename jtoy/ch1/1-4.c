// Write a program to print the corresponding Celsius to Fahrenheit table.

#include <stdio.h>

/*
    print Farenheit-Celcius table
    for fahr = 0, 20, ....,300
*/

int main()
{
    int fahr;
    int celcius;
    int lower;
    int upper;
    int step;

    lower = 0;
    upper = 300;
    step  = 20;

    fahr = lower;
    printf("%7s %8s \n", "Celcius", "Farenheit");
    while (fahr <= upper)
    {
        celcius = (fahr-32) * 5/9;
        printf("%7d %8d \n", celcius, fahr);
        fahr = fahr + step;
    }
}
