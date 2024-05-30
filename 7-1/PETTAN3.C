#include<stdio.h>
#include<conio.h>
#define sf scanf
#define pf printf

main()
{
	   int i, j;
	   clrscr();

	    for(i=5;i>=1;i--)
	    {
		for(j=i;j<=5;j++)
		{
		  pf("%d ",i);
		}

		 pf("\n");


	    }
	    getch();
}