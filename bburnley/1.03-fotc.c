/*#############################################################################
# Name: 1.03-fotc.c
# Created: 12-03-2016 14:35:44
# Edited: 12-03-2016 14:38:25
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include <stdio.h>

/* Print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

int     main(void)
{
    float   fahr;
    float   celsius;
    int     lower;
    int     upper;
    int     step;

    lower = 0;  /* lower limit of temperature table */
    upper = 300;  /* upper limit */
    step = 20; /* step size */
    fahr = lower;

    printf(" °F\t   °C\n");
    printf("________________\n");
    while (fahr <= upper) {
        celsius = 5.0/9.0 * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }
    return (0);
}
