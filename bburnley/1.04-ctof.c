/*#############################################################################
# Name: 1.04-ctof.c
# Created: 12-03-2016 14:38:53
# Edited: 12-03-2016 14:41:45
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include <stdio.h>

/* Print Celsius-Farenheit table
   for celsius = 0, 20, ..., 300 */

int     main(void)
{
    int     fahr;
    int     celsius;
    int     lower;
    int     upper;
    int     step;

    lower = 0;  /* lower limit of temperature table */
    upper = 300;  /* upper limit */
    step = 20; /* step size */
    celsius = lower;

    printf(" °F\t    °C\n");
    printf("________________\n");
    while (celsius <= upper) {
        fahr = (9.0/5.0 * celsius) + 32;
        printf("%3d\t%6d\n", celsius, fahr);
        celsius += step;
    }
    return (0);
}
