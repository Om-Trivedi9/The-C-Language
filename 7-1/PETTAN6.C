#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf


main()
{
	     int i, j;
	   clrscr();
	      for(i=5;i>=1;i--)
	      {
		      for(j=1;j<=i;j++)
		      {

		       if(j%2==0)
		       {
			  pf("0 ");
		       }
		      else
		      {

			pf("1 ");
		      }
		      }

		     pf("\n");

	      }

	    getch();

}
