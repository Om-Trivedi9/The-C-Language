#include <stdio.h>
#define pf printf
#define sf scanf

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int per(int a, int b)
{
    return (b * 100) / a;
}

void main()
{
    int a, b;
    for (int i = 0; a != 0; i++)
    {

        pf("\n\n");
        pf("Press 1 for +\n");
        pf("Press 2 for -\n");
        pf("Press 3 for *\n");
        pf("Press 4 for /\n");
        pf("Press 5 for %\n");
        pf("Press 0 for exit\n");
        pf("\nEnter your choice : ");
        sf("%d", &a);

        switch (a)
        {
        case 1:
            printf("Addition of %d and %d is %d\n", a, b, add(a, b));
            break;

        case 2:
            printf("Subtraction of %d and %d is %d\n", a, b, sub(a, b));
            break;

        case 3:
            printf("Multiplication of %d and %d is %d\n", a, b, mul(a, b));
            break;

        case 4:
            printf("Division of %d and %d is %d\n", a, b, div(a, b));
            break;

        case 5:
            printf("Addition of %d and %d is %d\n", a, b, add(a, b));
            break;
        case 0:
            printf("thank you for useing my calculator");
            printf("visit Again");

            break;
        }
    }
}