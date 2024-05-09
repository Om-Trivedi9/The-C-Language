#include<stdio.h>
#include<conio.h>
#define C clrscr
#define G getch
#define P printf
#define S scanf

main()
{
     int a;
     float pi;
     char ch;

     C();

     P("enter any number :");
     S("%d",&a);

     P("enter pi value:");
     S("%f",&pi);

     fflush(stdin);
     P("enter any character:");
     S("%c",&ch);
     P("\n\n");
     P("a : %d\n",a);
     P("pi : %f\n",pi);
     P("c : %char\n",ch);


     G();

}

