#include <stdio.h>

main()
{
    int o;
    char a = 'a';

    printf("Enter the number of alphabet to skip : ");
    scanf("%d", &o);
    printf("\n");

    while (a <= 'z')
    {
        if (o <= 9)
        {
            printf("%c\t", o);
            a = a + o;
        }
        else
        {
            printf("invalid number.....");
            break;
        }
    }
}