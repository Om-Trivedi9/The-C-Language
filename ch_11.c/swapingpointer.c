#include <stdio.h>

void main()
{
    int a, b;

    printf("enter first number A : ");
    scanf("%d", &a);
    printf("enter second number B : ");
    scanf("%d", &b);

    printf("\nBefore Swapping\n");

    int *omt, *omt7, *omt9;

    omt = &a;
    omt7 = &b;

    printf("A :%d\n", *omt);
    printf("B :%d\n", *omt7);

    omt9 = omt;
    omt = omt7;
    omt7 = omt9;

    printf("\nAfter Swapping\n");

    printf("A :%d\n", *omt);
    printf("B :%d\n", *omt7);
}