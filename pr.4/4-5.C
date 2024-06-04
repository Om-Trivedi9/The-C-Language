#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf
main()
{
	    int i, j, s;
	    clrscr();

	    for(i=1;i<=5;i++)
	    {
	       for(j=1;j<=i;j++)
	       {

		    pf("%d",j);


		}


	     for(s=5;s>i;s--)
	     {

	       pf("  ");
	     }

	     for(j=i;j>=1;j--)
	     {

	       pf("%d",j);
	     }
	      pf("\n");
	    }



   getch();
}