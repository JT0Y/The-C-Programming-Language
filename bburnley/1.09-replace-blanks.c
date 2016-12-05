/*#############################################################################
# Name: 1.09-replace-blanks.c
# Created: 12-04-2016 11:44:08
# Edited: 12-04-2016 15:40:38
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include <stdio.h>

int     main(void)
{
    int     c;
    int     pc;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && pc == ' ')
            ;
        else {
            putchar(c);
        }
        pc = c;
    }
    return (0);
}
