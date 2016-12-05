/*#############################################################################
# Name: 1.05-reverse-ftoc.c
# Created: 12-03-2016 14:51:16
# Edited: 12-03-2016 14:54:06
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include <stdio.h>

#define UPPER   300
#define LOWER   0
#define STEP    20

/* Print Fahrenheit-Celsius table in descending order*/

int     main(void)
{
    int     fahr;

    printf(" °F\t    °C\n");
    printf("________________\n");
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    return (0);
}
