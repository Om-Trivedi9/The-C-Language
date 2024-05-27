#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf


main()
{          int a, b, c, d;

	   clrscr();

	  pf("enter the value of first number :");
	  sf("%d",&a);
	  pf("enter the value of second number :");
	  sf("%d",&b);
	  pf("enter the value of third number :");
	  sf("%d",&c);
	  pf("enter the value of fourth number :");
	  sf("%d",&d);

	  pf("\n");

	  if(a>b)
	  {
		    if(a>c)
		    {
			    if(a>d)
			    {
			       pf("%d is the maximum",a);

			    }
			    else if(d>a)
			    {
			       pf("%d is the maximum",d);
			    }

			  }

	   }

	  else if(b>a)
	  {
		       if(b>d)
		      {
			       if(b>c)
			      {
				 pf("%d is the maximum",b);
			      }
		      else if(c>b)
		      {
			 pf("%d is the maximum",c);
		      }


		      }

	  }






	    getch();

}



