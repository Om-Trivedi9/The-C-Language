#include <stdio.h>

main()
{
    int size;

    printf("enter size of array :");
    scanf("%d", &size);

    int r[size];
    int *omt[size];

    for (int i = 0; i < size; i++)
    {
        omt[i] = &r[i];
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d", *omt[i]);
    }
}