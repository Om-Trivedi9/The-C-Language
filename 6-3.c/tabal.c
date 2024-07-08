#include <stdio.h>

main()
{
    int a, b;

    printf("Enter any no.:");
    scanf("%d", &b);

    for (int i = 1; i <= 10; i++)
    {
        a = b * i;
        printf("%d * %d = %d\n", b, i, a);
    }
}