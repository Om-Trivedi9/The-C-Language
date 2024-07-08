#include <stdio.h>

main()
{

    int o, m, a, t = 0, i;

    printf("Enter any no. : ");
    scanf("%d", &o);

    m = o;

    while (o > 10)
    {
        o = o % 10;
    }

    while (m != 0)
    {
        a = m % 10;
        t = (t * 10) + a;
        m = m / 10;
    }
    while (t > 10)
    {
        t = t % 10;
    }

    printf("\n First digit is : %d", o);
    printf("\n Last digit is  : %d", t);

    i = o + t;

    printf("\n\nSum of both digit is : %d", i);
}