#include <stdio.h>

main()
{
    int a, b, c;

    printf("Enter the value of A :");
    scanf("%d", &a);

    printf("Enter the value of B :");
    scanf("%d", &b);

    printf("\nBefore Swapping\n\n");

    printf("A\t:%d\n", a);
    printf("B\t:%d", b);

    c = a;
    a = b;
    b = c;

    printf("\n\nAfter Swapping\n\n");

    printf("A\t:%d\n", a);
    printf("B\t:%d", b);
}