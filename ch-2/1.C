#include<stdio.h>
#include<conio.h>

main()

 {
  int a=12,b=6;
    int c ;
    clrscr();

     printf("a : %d\n",a);
     printf("b : %d\n",b);
       c = a%b;

     printf("%d + %d = %d\n",a,b,a+b);
     printf("%d - %d = %d\n",a,b,a-b);
     printf("%d * %d = %d\n",a,b,a*b);
     printf("%d / %d = %d\n",a,b,a/b);
     printf("%d %%  %d = %d\n",a,b,c);



  getch();
}