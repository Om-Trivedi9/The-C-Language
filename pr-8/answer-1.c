#include <stdio.h>

int cube(int size)
{
    size = size * size * size;
    return size;
}

void main()
{
    int t;
    printf("Enter array size : ");
    scanf("%d", &t);

    int array[t][t], *ptr[t][t];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {

            printf("Enter a[%d][%d] : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            array[i][j] = cube(array[i][j]);
            ptr[i][j] = &array[i][j];
        }
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            printf("%d\t", *ptr[i][j]);
        }
        printf("\n");
    }
}