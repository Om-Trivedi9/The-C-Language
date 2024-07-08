#include <stdio.h>

main()
{
    int a, b;

    printf("enter any starting year no. :");
    scanf("%d", &b);

    printf("enter any ending year no.   :");
    scanf("%d", &a);

    printf("the leap year between this is :");

    while (b <= a)
    {
        if (b % 4 == 0)
        {
            printf("%d\t", b);
        }
        b++;
    }
}