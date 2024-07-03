#include <stdio.h>
main()
{
    int n;

    printf("enter array size:");
    scanf("%d", &n);

    int a[n];
    int negetiv[n];
    printf("\n\n array's elements:\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("enter a[%d]", i);
        scanf("%d", &n);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)

            negetiv[i] = a[i];
    }
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", negetiv[i]);
    }
}