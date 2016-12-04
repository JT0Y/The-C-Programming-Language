/*#############################################################################
# Name: 1.10-display-raw.c
# Created: 12-04-2016 11:47:08
# Edited: 12-04-2016 15:39:35
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include <stdio.h>

int     main(void)
{
    int     c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\b')
            printf("\\b");
        else if (c == '\t')
            printf("\\t");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }
    return (0);
}
