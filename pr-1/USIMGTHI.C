#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf


main()
{

	  int a,b,c;

	  clrscr();


	  pf("enter the value of a : ",a);
	  sf("%d",&a);

	  pf("enter the value of b :",b);
	  sf("%d",&b);
	  pf("\n");
	  pf("befor swepping");
	  pf("\n");
	   pf("a\t : %d",a);
	  pf("b\t : %d",b);

	   c = a;
	   a = b;
	   b = c;

	  pf("after sweppind");
	  pf("a\t : %d",a);
	  pf("b\t : %d",b);



	  getch();

}