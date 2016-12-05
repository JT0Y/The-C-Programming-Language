// PAGE 31(pdf), page 18 (book)
// Exercise 1-7. Write a program to print the value of EOF

#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);
    printf("-------Value of EOF------\n");
    printf("%i", c);
}
