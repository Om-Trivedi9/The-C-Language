#include<stdio.h>
#include<conio.h>
#define sf scanf
#define pf printf

main()
{
	 int a, b, c;
	 clrscr();

	 pf("enter a value of first number :");
	 sf("%d",&a);

	 pf("enter a value of second number :");
	 sf("%d",&b);

	 pf("enter a value of third number :");
	 sf("%d",&c);

	 if(a<b && a<c)
	 {
	     pf("minimum value is : %d",a);
	 }

	 else if(b<a && b<c)
	 {
	     pf("minimum value is : %d",b);
	 }


	 else if(c<a && c<b)
	 {
	     pf("minimum value is : %d",c);
	 }






      getch();
}

