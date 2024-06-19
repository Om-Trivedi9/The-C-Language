#include <stdio.h>

main()
{
    char o[20];
    char b[20];
    int plen = 0;
    int cmp = 0;

    printf("enter your name :");
    scanf("%[^\n]", &o);

    for (int i = 0; o[i] != '\0'; i++)
    {
        plen++;
    }

    for (int i = 0; i < plen; i++)
    {
        int m = 1;
        for (int j = i + 1; j < plen; j++)
        {
            if (o[i] == o[j])
            {
                m++;
                o[j] = '\0';
            }
        }
        if (o[i] != '\0')
        {
            printf("\n %c ==>%d", o[i], m);
        }
    }
}