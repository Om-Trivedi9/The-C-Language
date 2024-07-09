#include <stdio.h>

void main()
{
    char string[70];

    printf("Enter any string : ");
    scanf("%[^\n]", &string);

    int t = 0;
    int *lenth;

    for (int i = 0; string[i] != '\0'; i++)
    {
        t++;
    }

    lenth = &t;

    printf("\n\n\n\n");
    printf("length of string is %d", *lenth);
}