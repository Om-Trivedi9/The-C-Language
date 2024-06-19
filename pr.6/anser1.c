#include <stdio.h>

main()
{
    char name[20];
    char rvg[20];
    int len = 0;
    int n = 0;
    int cmp = 0;

    printf("enter your name :");
    scanf("%[^\n]", &name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        len++;
    }

    for (int i = len - 1; i >= 0; i--)
    {
        rvg[n++] = name[i];
    }

    for (int i = 0; i < len; i++)
    {
        if (name[i] == rvg[i])
        {
            cmp = 0;
        }

        else
        {
            cmp = 1;
            break;
        }
    }

    if (cmp == 0)
    {
        printf("The string is a palindrome");
    }

    else
    {
        printf("The string is not a palindrome");
    }
}