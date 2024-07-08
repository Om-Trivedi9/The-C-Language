#include <stdio.h>

main()
{
    int plen = 0, a = 0, b = 0, c = 0, d = 0;
    char omt[20];

    printf("Enter Password : ");
    scanf("%s", &omt);

    for (int i = 0; omt[i] != '\0'; i++)
    {
        plen++;
    }

    for (int i = 0; i < plen; i++)
    {
        if (omt[i] >= 'A' && omt[i] <= 'Z')
        {
            a++;
        }
        else if (omt[i] >= 'a' && omt[i] <= 'z')
        {
            b++;
        }
        else if (omt[i] >= '0' && omt[i] <= '9')
        {
            c++;
        }
        else
        {
            d++;
        }
    }

    if (a >= 1 && b >= 1 && c >= 1 && d >= 1 && plen >= 6)
    {
        printf("Password is valid\n");
    }
    else
    {
        printf("Password is not valid\n");
    }
}