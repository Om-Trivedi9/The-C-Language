#include <stdio.h>

main()
{
    int o, size;
    printf("Enter array A size : ");
    scanf("%d", &o);
    printf("Enter array B size : ");
    sf("%d", &size);
    int a[o];
    int b[size], merge[o + size];

    for (int i = 0; i < o; i++)
    {
        printf("a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("b[%d] : ", i);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < size; i++)
    {
        merge[i] = a[i];
    }
    for (int i = 0; i < size; i++)
    {
        merge[o++] = b[i];
    }

    for (int i = 0; i < o; i++)
    {
        printf("mearg of array : %d", merge[i]);
    }
}