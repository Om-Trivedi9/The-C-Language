#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf


main()
{
	 float basesalary, hra, da, ta, totalsalary;
	 clrscr();

	  pf("enter the base salery :");
	  sf("%f",&basesalary);

	 pf("\n");

	 pf("hra will : %.2f",hra);
	 sf("%f",&hra);

	  pf("\n");

	 pf("da will be : %.2f",da);
	 sf("%f",&da);

	 pf("\n");

	 pf("ta will be  :%.2f",ta);
	 sf("%f",&ta);

	  hra = (basesalary*10/100);
	  da = (basesalary*5/100);
	  ta = (basesalary*8/100);

	  totalsalary = basesalary+hra+da+ta;
	  pf("totalsalary wii be :",totalsalary);

	 getch();
}

