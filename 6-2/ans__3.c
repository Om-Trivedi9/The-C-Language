#include <stdio.h>

main()
{
    int o = 0, m = 1, t, d, i = 1;

    printf("\nEnter palce no. in series : ");
    scanf("%d", &d);
    printf(" %d  %d ", o, m);

    while (i <= d)
    {

        t = o + m;
        printf(" %d ", t);
        o = m;
        m = t;
        i++;
    }
}