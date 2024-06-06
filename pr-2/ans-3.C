#include <stdio.h>
#include <conio.h>
#define pf printf
#define sf scanf

main()
{         int a, b, c, d;
	  clrscr();

	  pf("enter first number :");
	  sf("%d",&a);

	  pf("enter second number :");
	  sf("%d",&b);

	  pf("enter third number :");
	  sf("%d",&c);


	  pf("enter fourth number:");
	  sf("%d",&d);


	  if(a>b)
	  {
	      if(a>c)
	      {
		 if(a>d)
		 {
		  pf("%d is maximun",a);

		 }
		 else
		 {
		  pf("%d is maximum",d);
		 }



	      }
	    }

	     else if(a<b)
	     {

		   if(b>c)
		   {
		       pf("%d is maximum",b);


		   }

		   else
		   {

		    pf("%d is maximum",c);
		   }






	     }











 getch();

}