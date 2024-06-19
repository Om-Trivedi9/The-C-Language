#include <stdio.h>

main()
{

    int o, m, t = 0;
    printf("Enter the frist year : ");
    scanf("%d", &o);
    printf("Enter the end year : ");
    scanf("%d", &m);
    int leep[m - o];

    for (int i = o; i <= m; i++)
    {
        if (o % 4 == 0)
        {
            leep[t] = i;
            t++;
        }
    }

    for (int i = 0; i < t; i++)
    {
        printf("%d ", leep[i]);
    }
}
