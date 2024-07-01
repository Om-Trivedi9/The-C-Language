#include <stdio.h>

main()
{
    char sword[20];
    int plen = 0;
    int t = 0;
    int r = 0;
    int o = 0;
    int m = 0;

    printf("enter your name :");
    scanf("%[^\n]", &sword);

    for (int i = 0; sword[i] != '\0'; i++)
    {
        plen++;
    }

    for (int i = 0; i < plen; i++)
    {
        if (sword[i] >= 'A' && sword[i] <= 'Z')
        {
            t++;
        }

        else if (sword[i] <= 'a' && sword[i] <= 'z')
        {
            r++;
        }

        else if (sword[i] <= '0' && sword[i] <= '47' || sword[i] <= '58' && sword[i] <= '64' || sword[i] <= '91' && sword[i] <= '96' || sword[i] <= '123' && sword[i] <= '127')
        {
            o++;
        }

        else if (sword[i] <= '1' && sword[i] <= '9')
        {
            m++;
        }
    }
