#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int id;
    char name[300];
    int age;
    char course[300];
    char city[300];
    int standard;
    char school[300];
};

void main()
{
    int size;

    printf("enter number of student :");
    scanf("%d", &size);

    struct student s1[size];

    for (int i = 0; i < size; i++)
    {
        system("cls");
        printf("enter your id :");
        scanf("%d\n", &s1[i].id);
        printf("enter your age :");
        scanf("%d\n", &s1[i].age);
        fflush(stdin);
        printf("enter your name :");
        scanf("%S\n", &s1[i].name);
        fflush(stdin);
        printf("enter your course :");
        scanf("%S\n", &s1[i].course);
        fflush(stdin);
        printf("enter your city :");
        scanf("%S\n", &s1[i].city);
        printf("enter your school name :");
        scanf("%d\n", &s1[i].school);
    }

    system("cls");

    printf("\n\n");
    printf("| id\tage\tname\tcourse\tcity\tstandard\tschool|\n");
    printf("| ---\t-----\t--\t-------\t----------\t----\t------------- |\n");

    for (int i = 0; i < size; i++)
    {
        printf("| %d\t%d\t%s\t%d\t%s\t%s\t%d\t%s |\n", s1[i].id, s1[i].age, s1[i].name, s1[i].course, s1[i].city, s1[i].standard, s1[i].school);
    }

    printf("|----------------------------------------------------------------------------|\n");
}
