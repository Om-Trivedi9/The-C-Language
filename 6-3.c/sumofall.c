#include <stdio.h>

main()
{
    int a = 0, n, sum = 0;

    printf("Enter last no.:");
    scanf("%d", &n);

    for (a = 1; a <= n; a++)
    {
        sum = sum + a;
    }
    printf("sum of all : %d", sum);
}