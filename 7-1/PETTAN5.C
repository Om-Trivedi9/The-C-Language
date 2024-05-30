#include<stdio.h>
#include<conio.h>
#define sf scanf
#define pf printf

main()
{
	   int i, j;
	   clrscr();

	    for(i=1;i<=5;i++)
	    {
		for(j=5;j>=i;j--)
		{
		  pf("%d ",i);
		}

		 pf("\n");


	    }
	    getch();
}
