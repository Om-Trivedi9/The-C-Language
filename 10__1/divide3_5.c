#include <stdio.h>

int divid(int t)
{
    int r, i;
    if (t % 3 == 0 && t % 5 == 0)
    {
        t = 1;
    }
    else
    {
        t = 0;
    }

    return t;
}

void main()
{
    int o, m;
    printf("Enter any no. : ");
    scanf("%d", &o);

    m = divid(o);

    if (m == 1)

        printf(" This  both Number can  divide with 3 and 5 \n");

    else

        printf(" This both Number can not divide with  3 and 5");
}