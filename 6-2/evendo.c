#include <stdio.h>

main()
{
    int a=1, n;

    printf("enter any number :");
    scanf("%d", n);

    if (a % 2 == 0)
    {
        do
        {

            printf("%d\t", n);
            n++;

        } while (a <= n);
    }
}