
#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=17;j++)
        {
           if(i==1||i==7||j==3||j==9||j==13||(j==1&&i==6))
           {
               if((j==6||j==12)&&(i==1||i==7)||(i==1&&(j==14||j==15||j==16||j==17))||(i==7&&(j==4||j==5||j==1)))
               {
                   printf(" ");
               }
               else
               {
                   printf("*");
               }
           }
           else
           {
               printf(" ");
           }
           printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}