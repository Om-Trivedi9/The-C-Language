#include <stdio.h>

void main()
{
    int r;
    printf("Enter size of array: ");
    scanf("%d", &r);

    int a[r];
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        printf("Enter array[%d] : ", i);
        scanf("%d", &a[i]);
    }

    int *omt;
    int **omt7;

    omt = &a;
    omt7 = &omt[r - 1];

    for (int i = 0; i < r; i++)
    {
        printf(" %d ", *(omt7 - i));
    }
}