// page 31
// Exercise 1-6. Verify that the expression qetchar () I= EOFis 0 or 1.

#include <stdio.h>

// int main()
// {
//    int c;
//
//    c = getchar();
//    while (c != EOF) {
//         putchar(c);
//         c = getchar();
//    }
// }

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        printf("%d ", c != EOF);
        putchar(c);
    }
    printf("\n%d\n", c != EOF);
}
