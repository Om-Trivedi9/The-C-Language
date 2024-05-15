#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{

	int a, b;
	clrscr();

	pf("enter the value of a :",a);
	sf("%d",&a);

	pf("emter the value of b :",b);
	sf("%d",&b);
	pf("\n");
	pf("befor swepping");
	pf("a\t : %d",a);
	pf("a\t : %d",b);

	 a = a*b;
	 b = a/b;
	 a = a/b;

	pf("after swepping");
	pf("a\t : %d",a);
	pf("a\t : %d",b);


	getch();

}



