#include <stdio.h>

main()
{
    int a, b, ans;

    printf("Enter the value of A :");
    scanf("%d", &a);

    printf("Enter the value of B :");
    scanf("%d", &b);

    ans = (a * a) + (a * a * b) + (b * b * a) + (b * b);

    printf("\n");
    printf("(A+B)^3 = %d", ans);
}