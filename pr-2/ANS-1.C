#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf
main()
{
	    char ch;
	    clrscr();

	    pf("enter any charcter:");
	    sf("%c",&ch);


	    if((ch>='a'&& ch <= 'z')  || (ch >= 'A' && ch <= 'Z'))
	    {

	      pf("it is the alphabet");
	    }

	    else if(ch>='1' && ch<='9')
	    {
	     pf("it is the digit");
	    }


	    else
	    {
	     pf("it is the special charcter");
	    }




   getch();
}
