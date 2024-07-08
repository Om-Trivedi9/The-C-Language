#include <stdio.h>

main()
{

    long int a, b = 0;

    printf("Enter any number : ");
    scanf("%d", &a);

    while (a != 0)
    {
        a = a / 10;
        b++;
    }

    printf("sum of digits :  %d ", b);
}
