#include <stdio.h>

int lenth(char omt[700])
{
    int o = 0;
    for (int i = 0; omt[i] != '\0'; i++)
        o++;
    return o;
}
void main()
{
    char sting[700];
    int lenths;

    printf("Enter any sting : ");
    scanf("%[^\n]", &sting);

    lenths = lenth(sting);

    printf("\n");
    printf(" length of sting is %d", lenths);
}