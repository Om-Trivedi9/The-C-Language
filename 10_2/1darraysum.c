#include <stdio.h>

int sum(int r)
{
    int t = 0;

    int a[r];

    for (int i = 0; i < r; i++)
    {
        printf("r[%d] : ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < r; i++)
    {
        t += a[i];
    }

    return t;
}

void main()
{
    int o, m;
    printf("Enter Array size : ");
    scanf("%d", &o);
    m = sum(o);
    printf("\n\n");
    printf("Sum of array's element : %d", m);
}