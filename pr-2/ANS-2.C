#include <stdio.h>
#include <conio.h>

main()
{          int a;
	   clrscr();

	    printf("enter any number :");
	    scanf("%d",&a);

	    (a%2==0)
	    ?printf("%d is even number",a)
	    :printf("%d is odd number",a);



    getch();
}