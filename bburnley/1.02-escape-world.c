/*#############################################################################
# Name: 1.02-escape-world.c
# Created: 12-03-2016 14:20:30
# Edited: 12-03-2016 14:21:22
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include <stdio.h>

int     main(void)
{
    /* This will fail. That's the point of the exercise. */
    printf("\jello, world\n");
    return (0);
}
