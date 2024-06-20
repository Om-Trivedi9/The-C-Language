#include <stdio.h>

main()
{
    char name[20];

    printf("enter your name :");
    scanf("%[^\n]", &name);

    printf("name\t : %s\n\n", name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 97 && name[i] <= 122)
        {
            name[i] = name[i] - 32;
        }

        else if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] = name[i] + 32;
        }
    }

    printf("name\t : %s", name);
}