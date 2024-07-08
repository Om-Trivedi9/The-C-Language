#include <stdio.h>

main()
{
    int o, m, sum = 0, multi = 1;

    printf("Enter any number : ");
    scanf("%d", &o);

    while (o != 0)
    {
        m = o % 10;

        sum += m;

        multi *= m;

        o = o / 10;
    }

    if (sum == multi)
    {
        printf("This number is magical number....");
    }
    else
    {
        printf("This no. is not magical number....");
    }
}