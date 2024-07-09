#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int id[700];
    int age[700];
    char name[700];
    char roal[700];
    char city[700];
    char expirianc[700];
    char company_name[700];
};

void main()
{
    int size;

    printf("enter number of employ :");
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
        printf("enter your roal for company :");
        gets(s1[i].roal);
        fflush(stdin);
        printf("enter your expirianc :");
        scanf("%S\n", &s1[i].expirianc);
        fflush(stdin);
        printf("enter your city :");
        scanf("%S\n", &s1[i].city);
        printf("enter your company name :");
        scanf("%d\n", &s1[i].company_name);
    }

    system("cls");

    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("employ delails output\n\n");

        printf("styand ID : %d\n", s1[i].id);
        printf("student Age : %d\n", s1[i].age);
        printf("student name : %s\n", s1[i].name);
        printf("student roal : %s\n", s1[i].roal);
        printf("student city : %s\n", s1[i].city);
        printf("student expirianc : %s\n", s1[i].expirianc);
        printf("student company name : %s\n", s1[i].company_name);

        printf("\n\n\n\n");
    }
}
