#include <stdio.h>

int cube()
{
    int o;
    printf("Enter any number: ");
    scanf("%d", &o);
    int cube = o * o * o;
}

void main()
{
    printf("\n\n");
    printf("Cube is : %d", cube());
}