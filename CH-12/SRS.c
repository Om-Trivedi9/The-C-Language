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
        printf("\n\nstudent details\n\n");
        system("cls");
        printf("enter your id :");
        scanf("%d", &s1[i].id);
        printf("\n");
        printf("enter your age :");
        scanf("%d", &s1[i].age);
        printf("\n");
        printf("enter your standard :");
        scanf("%d", &s1[i].standard);
        printf("\n");
        fflush(stdin);
        printf("enter your name :");
        gets(s1[i].name);
        printf("\n");
        fflush(stdin);
        printf("enter your course :");
        gets(s1[i].course);
        printf("\n");
        fflush(stdin);
        printf("enter your city :");
        gets(s1[i].city);
        printf("\n");
        fflush(stdin);
        printf("enter your school name :");
        gets(s1[i].school);
        printf("\n\n\n\n\n");
    }

    system("cls");

    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("student delails output\n\n");

        printf("styand ID : %d\n", s1[i].id);
        printf("student Age : %d\n", s1[i].age);
        printf("student Standard : %d\n", s1[i].standard);
        printf("student NMAE : %s\n", s1[i].name);
        printf("student COURSE : %s\n", s1[i].course);
        printf("student CIYT : %s\n", s1[i].city);
        printf("student SCHOOL : %s\n", s1[i].school);

        printf("\n\n\n\n");
    }
}
