#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf


main()
{
	    int i, j, N=1;
	   clrscr();
	   for(i=1;i<=5;i++)
	   {
		for(j=1;j<=i;j++)
		{
		   pf("%d ",N++);

		}

	      pf("\n");

	   }

	    getch();

}

