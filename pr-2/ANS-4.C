#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf
main()
{
	    int n;
	    clrscr();

	    pf("enter 1 for monday\n");
	    pf("enter 2 for tuseday\n");
	    pf("enter 3 for wensday\n");
	    pf("enter 4 for thusnday\n");
	    pf("enter 5 for friday\n");
	    pf("enter 6 for saturday\n");
	    pf("enter 7 for sunday\n");


	    pf("enter any number:");
	    sf("%d",&n);


	   switch(n)
	   {
	     case 1:
	      pf("today is monday");
	      break;

	    case 2:
	      pf("today is tuseday");
	      break;

	   case 3:
	      pf("today is wensday");
	      break;

	   case 4:
	      pf("today is thusday");
	      break;

	   case 5:
	      pf("today is friday");
	      break;


	   case 6:
	      pf("today is saturday");
	      break;


	   case 7:
	      pf("today is sunday");
	      break;

	      default:
		pf("invalid number");
	  }






   getch();
}

