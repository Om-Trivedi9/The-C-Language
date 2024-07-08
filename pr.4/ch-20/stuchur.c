#include <stdio.h>

struct student
{
    int roll_no;
    char name[200];
    float persenteg;
};

void main()
{

    struct student om;
    {
        om.roll_no = 7;
        strcpy(om.name, "trivedi");
        om.persenteg = 97.77;
    };

    printf("student name : %s\n", om.name);
    printf("student roll number : %d\n", om.roll_no);
    printf("student persenteg : %.2f\n", om.persenteg);
}
