#include <stdio.h>

int sum(int a, int b)
{
    int ans = a + b;
    printf("addition of choise:%d", a + b);
}

int divi(int a, int b)
{
    int ans = a - b;
    printf("addition of choise:%d", a - b);
}

int multi(int a, int b)
{
    int ans = a * b;
    printf("addition of choise:%d", a * b);
}

int div(int a, int b)
{
    int ans = a / b;
    printf("addition of choise:%d", a / b);
}

int mod(int a, int b)
{
    int ans = a % b;
    printf("addition of choise:%d", a % b);
}

main()
{
    int a, b, n;
    do
    {
        printf("press 1 for +:\n");
        printf("press 2 for -:\n");
        printf("press 3 for *:\n");
        printf("press 4 for /:\n");
        printf("press 5 for %:\n");
        printf("press 0 for the exit:\n");

        printf("enter your choice:");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("enter the value of a and b:");
            scanf("%d%d", &a, &b);
            printf("the sum of a and b is:%d\n", a + b);
            sum(a, b);
            break;

        case 2:
            printf("enter the value of a and b:");
            scanf("%d%d", &a, &b);
            printf("the difference of a and b is:%d\n", a - b);
            divi(a, b);
            break;

        case 3:
            printf("enter the value of a and b:");
            scanf("%d%d", &a, &b);
            printf("the product of a and b is:%d\n", a * b);
            multi(a, b);
            break;

        case 4:
            printf("enter the value of a and b:");
            scanf("%d%d", &a, &b);
            printf("the product of a and b is:%d\n", a / b);
            div(a, b);
            break;

        case 5:
            printf("enter the value of a and b:");
            scanf("%d%d", &a, &b);
            printf("the product of a and b is:%d\n", a % b);
            mod(a, b);
            break;

        case 0:

            printf("thank you for using my calculater");
            break;
        }

    } while (n != 0);
}
