

#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf


main()
{
	 float celsius,fahrenheit;
	 clrscr();

	 printf("enter temprechur in celsius :");
	 sf("%f",&celsius);

	  fahrenheit=(celsius*9/5)+32;

	  pf("tempretuer in fahrenheit is :%.2f",fahrenheit);




	   getch();

}