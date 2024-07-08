#include <stdio.h>

main()
{
    int o;
    printf("Enter array size : ");
    scanf("%d", &o);
    int a[o];

    for (int i = 0; i < o; i++)
    {
        printf("a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < o; i++)
    {
        printf(" Square of Element  is : %d\n", a[i] * a[i]);
    }
}