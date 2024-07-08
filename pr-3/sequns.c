#include <stdio.h>

main()
{
    long int o, m, t = 0, i;

    printf("Enter any singal number  : ");
    scanf("%d", &o);

    printf("\nEnter number of time  sequns : ");
    scanf("%d", &m);

    i = o;

    if (o < 10)
    {
        printf("\nsequns is : \n");
        while (t <= m)
        {
            o = (o * 10) + i;
            printf(" %d = %d ", t, o);
            t++;
        }
    }
    else
    {
        printf("Invalid no.......");
    }
}