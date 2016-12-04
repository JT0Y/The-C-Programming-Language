/*#############################################################################
# Name: 1.06-precendence-test.c
# Created: 12-03-2016 15:24:15
# Edited: 12-03-2016 15:26:56
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include <stdio.h>

int     main(void)
{
    printf("Press any key to show the value of: get() != EOF ");
    printf("%d\n", getchar() != EOF);
    return (0);
}
