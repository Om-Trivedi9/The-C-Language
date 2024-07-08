#include <stdio.h>
#include <conio.h>
#define pf printf
#define sf scanf

main()
{
    int a, b, ans;

    printf("Enter the value of A :");
    scanf("%d", &a);

    printf("Enter the value of B :");
    scanf("%d", &b);

    ans = (a * a) + (2 * a * b) + (b * b);

    printf("\n");
    printf("(A+B)^2 = %d", ans);
}