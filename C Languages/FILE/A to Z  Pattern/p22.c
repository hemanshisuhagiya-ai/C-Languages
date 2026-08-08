
#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=6;j++)
        {
            
            if(j==1||j==5||i==1||i==7||(i==5&&j==4))
            {
               if((i==1||i==7)&&(j==1||j==5)||(i==1&&j==6))
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