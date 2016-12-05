/*#############################################################################
# Name: 1.08-blank-tabs-newlines.c
# Created: 12-04-2016 11:39:29
# Edited: 12-04-2016 12:42:37
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include <stdio.h>

int     main(void)
{
    int     c;
    int     blanks;
    int     tabs;
    int     newlines;

    blanks = 0;
    tabs = 0;
    newlines = 0;
    while ((c = getchar()) != EOF)
    {
        c = getchar();
        if (c == '\n')
            ++newlines;
        if (c == '\t')
            ++tabs;
        if (c == ' ')
            ++blanks;
     }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", blanks, tabs, newlines);
    return (0);
}
