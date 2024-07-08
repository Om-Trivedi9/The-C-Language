#include <stdio.h>


main()
{
    char email[] = "admin@gmail.com";
    char pass[] = "123456";
    char email7[16], pasaword1[7], omt;
    int lenth1, length2;

    printf("\nEnter your Gmail ID : ");
    scanf("%s", &email7);

    printf("\nEnter your Password : ");
    scanf("%s", & pasaword1);

    for (int i = 0; email[i] != '\0'; i++)
        lenth1++;
    
    for (int i = 0; pass[i] != '\0'; i++)
        length2++;
    
    for (int i = 0; i < lenth1; i++)
    {
        if (email[i] == email7[i])
             omt = 0;
        else
        {
            omt = 1;
            break;
        }
    }
    
    for (int i = 0; i < length2; i++)
    {
        if (pass[i] ==  pasaword1[i])
            omt = 0;
        else
        {
            omt = 1;
            break;
        }
    }

    if(omt==0)
     printf("\nLogin Successful.....");
    else
    printf("Login Failed.try again....");
}