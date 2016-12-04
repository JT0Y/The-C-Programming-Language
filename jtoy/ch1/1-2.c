// Experiment to find out what happens when printf's argument
// string contains \c, where c is some character not listed above.

#include <stdio.h>

int main()
{
    printf("Hello, ");
    printf("world");
    printf("\t");
    printf("\r");
    printf("\v");
    printf("\n");
    printf("\\c");
    //printf("\c");  <-- makes error
}
