#include <stdio.h>

void main()
{
    char string[200];

    printf("Enter any string : ");
    scanf("%[^\n]", &string);

    int lenth = 0;
    int *lenth;

    for (int i = 0; i != 'null'; i++)
    {
        lenth++;
    }

    lenth = &lenth;

    printf("\n");
    printf("length of string is %d", *lenth);
}