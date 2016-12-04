// Page 28:
// Exercise 1-5. Modify the temperature conversion program to print the table in
// reverse order, that is, from 300 degrees to O.
#include <stdio.h>

int main()
{
    int fahr;
    int celcius;
    int lower;
    int step;

    lower = 300;
    step  = 20;

    fahr = lower;
    printf("%7s %8s \n", "Celcius", "Farenheit");
    while (fahr >= 0)
    {
        celcius = (fahr-32) * 5/9;
        printf("%7d %8d \n", celcius, fahr);
        fahr = fahr - step;
    }
}
