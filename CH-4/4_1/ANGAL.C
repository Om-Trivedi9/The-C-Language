#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

main()
{
	  float firstangal, secondangal, thirdangal;

	 clrscr();

	  pf("enter value of firstangal :");
	  sf("%f",&firstangal);

	  pf("\n");

	 pf("enter value ofsecondangal :");
	 sf("%f",&secondangal);

	 thirdangal = 180 - (firstangal + secondangal);

	 pf("thirdangal is : %.2f",thirdangal);





	    getch();

}

