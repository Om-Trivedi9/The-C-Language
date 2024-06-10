#include <stdio.h>
#define pf printf
#define sf scanf
main()
{
    int n;
    pf("Enter the number of elements: ");
    sf("%d", &n);
    int a[n];

    pf("\n Array elements");
    for (int i = 0; i < n; i++)
    {
        pf("enter a[%d]", i);
        sf("%d", &a[i]);
    }

    pf("leanth of array is : %d", n);
}