#include <stdio.h>

main()
{

    int o, m, t = 0;

    printf("Enter Starting year : ");
    scanf("%d", &o);
    printf("Enter Ending year : ");
    scanf("%d", &m);
    int leep[m - o];
    for (int i = o; i <= m; i++)
    {
        if (i % 4 == 0)
        {

            leep[t] = i;
            t++;
        }
    }

    for (int i = 0; i < t; i++)
    {
        printf(" %d\n", leep[i]);
    }
}
