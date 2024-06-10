#include <stdio.h>
#define pf printf
#define sf scanf
main()

{
    int c;
    pf("Enter array c: ");
    sf("%d", &c);

    int a[c], b[c], sum[c];
    pf("\n\n first array \n\n");

    for (int i = 0; i < c; i++)
    {
        pf("Enter a[%d]: ", i);
        sf("%d", &a[i]);
    }

    pf("\n\n second array \n\n");

    for (int i = 0; i < c; i++)
    {
        pf("Enter b[%d]: ", i);
        sf("%d", &b[i]);
    }

    for (int i = 0; i < c; i++)
    {
        sum[i] = a[i] + b[i];
    }

    pf("\n\n Array sum \n\n");
    for (int i = 0; i < c; i++)
    {
        pf("%d\t", sum[i]);
    }
}