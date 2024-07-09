#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int id;
    int age;
    char name[70];
    char roal[70];
    char city[70];
    char expirianc[70];
    char company_name[70];
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
        scanf("%d", &s1[i].id);
        printf("enter your age :");
        scanf("%d", &s1[i].age);
        fflush(stdin);
        printf("enter your name :");
        gets(s1[i].name);
        fflush(stdin);
        printf("enter your roal for company :");
        gets(s1[i].roal);
        fflush(stdin);
        printf("enter your expirianc :");
        gets(s1[i].expirianc);
        fflush(stdin);
        printf("enter your city :");
        gets(s1[i].city);
        printf("enter your company name :");
        gets(s1[i].company_name);
    }

    system("cls");

    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("employ delails output\n\n");

        printf("employ ID : %d\n", s1[i].id);
        printf("employ Age : %d\n", s1[i].age);
        printf("employ name : %s\n", s1[i].name);
        printf("employ roal : %s\n", s1[i].roal);
        printf("employ city : %s\n", s1[i].city);
        printf("employ expirianc : %s\n", s1[i].expirianc);
        printf("employ company name : %s\n", s1[i].company_name);

        printf("\n\n\n\n");
    }
}
