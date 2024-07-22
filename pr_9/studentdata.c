#include <stdio.h>

struct studentdata
{
    char name[70];
    int rollnumber;
    int maths;
    int physics;
    int chemistry;
};
void main()
{
    struct studentdata o[5];
    int totalnumber[5];
    float persente[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\n\nstudent details\n\n");

        fflush(stdin);
        printf("enter your name :");
        scanf("%[^\n]", &o[i].name);
        printf("\n");
        printf("Enter roll no : ");
        scanf("%d", &o[i].rollnumber);
        printf("\n");
        printf("\nmarks of chemistry : ");
        scanf("%d", &o[i].chemistry);
        printf("\n");
        printf("\nmarks of maths : ");
        scanf("%d", &o[i].maths);
        printf("\n");
        printf("\nmarks of physics : ");
        scanf("%d", &o[i].physics);
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        totalnumber[i] = o[i].physics + o[i].chemistry + o[i].maths;
        // printf("%f\n", totalnumber[i] / 300 * 100);
        persente[i] = ((float)totalnumber[i] / 300) * 100;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("the student name : %s ", o[i].name);
        printf("\n");
        printf("the student's rollnumber  : %d", o[i].rollnumber);
        printf("\n");
        printf("Chemistry marks : %d", o[i].chemistry);
        printf("\n");
        printf("Maths marks: %d", o[i].maths);
        printf("\n");
        printf("Physics marks: %d", o[i].physics);
        printf("\n");
        printf("Total marks: %d", totalnumber[i]);
        printf("\n");
        printf("Percentage : %.2f", persente[i]);
        printf("\n");
    }
}