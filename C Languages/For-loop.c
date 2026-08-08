### Example 1 : print numbers from 0 to 9

#include<stdio.h>
int main()
{
    int i;
    
    for(i=0;i<=10;i++)
    {
    printf("%d\n",i);
    }
    return 0;
}

###Example 2 :print a message multiple times

#include<stdio.h>
int main()
{
    // int i;
    
    for(int i=0;i<=10;i++)
    {
    printf(" %d Hello \n",i);
    }
    return 0;
}

### Sum of all the numbers from 1 to 100

#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=0; i<=100; i++)
    {
        sum=sum+i;
    }
   
    printf("%d",sum);
    return 0;
}

### Sum of Even Numbers

#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=2; i<=100; i+=2)
    {
        printf("%d\t",i);
        sum=sum+i;
    }
    
    printf("SUM:%d",sum);
    return 0;
}

Q. Can you use the for loop to compute the sum of only odd numbers from 1 to 100. In each iteration, you need to add an odd number to the sum.

#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=1; i<=100; i++)
    {
        printf("%d+%d\t",sum,i);
        sum+=i;
        printf("%d\n",sum);
    }
    return 0;
}