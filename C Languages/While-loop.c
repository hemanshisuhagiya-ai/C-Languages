1-character 2 skip print

#include <stdio.h>
int main() {
    
  // Initialization expression
  char ch = 'a'; 
 
  // Test expression
  while(ch <= 'z') {
    printf("%c ", ch);   
    
    // update expression
    ch+=2;
  } 
  
  return 0;
}

### Example 1 : infinite while loop

#include<stdio.h>
int main()
{
    while(1<5)
    {
        printf("while loop in C\n");
    }
    return 0;
}

### Example 2 : while loop

#include<stdio.h>
int main()
{
    int count=1;
    
    while(count<5)
    {
        // printf("While loop in C \n");
        printf("count %d\n",count);
        count+=1;
    }
    
    return 0;
}

#include<stdio.h>
int main()
{
    int count=1;
    int i;
    
    printf("Enter your number:");
    scanf("%d",&i);
    
    while(count<i)
    {
        // printf("While loop in C \n");
        printf("count %d\n",count);
        count+=1;
    }
    
    return 0;
}

## Create Multiplication Table

#include<stdio.h>
int main()
{
    int count=1;
    int number1,number2;
    
    printf("Enter your number:");
    scanf("%d %d",&number1,&number2);
    
    while(count<=10)
    {
        int product1 = number1 * count;
        int product2 = number2 * count;
        
        printf("%d * %d = %d\t",number1,count,product1);
        printf("%d * %d = %d\n",number2,count,product2);
        
        count+=1;
    }
    
    return 0;
}

### count Digit in a number

#include<stdio.h>
int main()
{
    int num,count=0;
    
    printf("Enter Your Number:");
    scanf("%d",&num);
    
    while(num>0)
    {
        num=num/10;
        count++;
        printf("Digits:%d\n",num);
    }
    
    printf("Total Digits:%d",count);
    
    return 0;
}


### Reverse Number

#include<stdio.h>
int main()
{
    int num,reverse=0,rem;
    printf("Enter Your Number:");
    scanf("%d",&num);
    
    while(num!=0)
    
    {
        rem=num%10;
        reverse=reverse*10 + rem;
        num=num/10;
    }
    
    printf(" Reverse number:%d",reverse);
    return 0;
}

### Palindrome number

#include<stdio.h>
int main()
{
    int num,original,reverse=0,rem;
    printf("Enter Your Number:");
    scanf("%d",&num);
    
    original=num;
    
    while(num!=0)
    
    {
        rem=num%10;
        reverse=reverse*10 + rem;
        num=num/10;
    }
       printf(" Reverse number:%d\n",reverse);
    
    if(original==reverse)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not Palindrome Number");
    }   
 
    return 0;
}

------------------------------------------------------------------

1. 1 to 10 numbers

#include<stdio.h>
int main()
{
    int a=1;
    while(a<=10)
    {
        printf("%d\n",a);
        a++;
    }
    return 0;
}

------------------------------------------------------------------

2. 1 to n numbers

#include<stdio.h>
int main()
{
    int num,a=1;
    
    printf("Enter Number: ");
    scanf("%d",&num);
    
    while(a<=num)
    {
        printf("%d\n",a);
        a++;
    }
    return 0;
}

------------------------------------------------------------------

3. 10 to 1 numbers

#include<stdio.h>
int main()
{
    int num,a=10;
    
    while(a>=1)
    {
        printf("%d\n",a);
        a--;
    }
    
    return 0;
}

------------------------------------------------------------------

4. n to 1 numbers

#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter Number:" );
    scanf("%d",&num);
    
    while(num>=1)
    {
        printf("%d\n",num);
        num--;
    }
    
    return 0;
}

------------------------------------------------------------------

5. Odd numbers from 1 to 100

#include<stdio.h>
int main()
{
    int i=1;
    
    while(i<=100)
    {
        printf("%d \n",i);
        i+=2;
    }
    
    return 0;
}

------------------------------------------------------------------

6. Print Even numbers from 1 to 100

#include<stdio.h>
int main()
{
    int i=2;
    
    while(i<=100)
    {
        printf("%d\n",i);
        i+=2;
    }
    
    return 0;
}


------------------------------------------------------------------
7. Find sum of first N natural numbers

#include<stdio.h>
int main()
{
    int num,i=1,sum=0;
    
    printf("Enter Number:");
    scanf("%d",&num);
    
    while(i<=num)
    {
        printf("%d\n", i);
        sum=sum+i;
        i++;
    }
    
    printf("SUM: %d" ,sum);
    
    return 0;
}
-------------------------------------------------------------------
8. Find factorial of a number

#include<stdio.h>
int main()
{
    int num,i=1,fact=1;
    
    printf("Enter Number:");
    scanf("%d",&num);
    
    while(i<=num)
    {
        // printf("%d\n", i);
        fact=fact*i;
        i++;
    }
    
    printf("facrorial: %d" ,fact);
    
    return 0;
}

-------------------------------------------------------------------
9. Reverse a number

#include <stdio.h>

int main()
{
   int num,rem,rev=0;
   
   printf("Enter Number:");
   scanf("%d",&num);
   
   while(num!=0)
   {
           rem=num%10;
           rev=rev*10+rem;
           num/=10;
   }
   
   printf("Reverse Number: %d\n ",rev);

    return 0;
}

--------------------------------------------------------------------
10. Check palindrome number

#include <stdio.h>

int main()
{
   int num,rem,rev=0,original=0;
   
   printf("Enter Number:");
   scanf("%d",&num);
   
   original=num;
   
   while(num!=0)
   {
           rem=num%10;
           rev=rev*10+rem;
           num/=10;
       
   }
   
   printf("Reverse Number: %d\n ",rev);

    if(original==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}

--------------------------------------------------------------------
11. Count digits in a number

#include <stdio.h>

int main()
{
   int num,count=0;
   
   printf("Enter Number:");
   scanf("%d",&num);
   
   while(num!=0)
   {
          num/=10;
          count++;
   }
   
   printf("Count Digit: %d\n ",count);

    return 0;
}

----------------------------------------------------------------------
12. Find sum of digits of a number

#include <stdio.h>

int main()
{
   int num,rem=0,sum=0;
   
   printf("Enter Number:");
   scanf("%d",&num);
   
   while(num!=0)
   {
          rem=num%10;
          sum=sum+rem;
          num/=10;
   }
   
   printf("Sum of Total Digit: %d\n ",sum);

    return 0;
}

-----------------------------------------------------------------------
13. Find product of digits of a number

#include <stdio.h>

int main()
{
   int num,i=1;
   
   printf("Enter Number:");
   scanf("%d",&num);
   
   while(i<=10)
   {
       printf("%d * %d = %d \n",num,i,num*i);
       i++;
   }
   
   

    return 0;
}

------------------------------------------------------------------------
14. Check Armstrong number




15. Check prime number
16. Print multiplication table of a number
17. Print Fibonacci series
18. Find GCD (HCF) of two numbers
19. Find LCM of two numbers
20. Calculate power (x^y)
21. Convert decimal to binary
22. Print all factors of a number
23. Count even and odd digits in a number
24. Find largest digit in a number
25. Find smallest digit in a number
26. Print square pattern using while loop
27. Print triangle pattern using while loop
28. Print number pyramid using while loop
29. Find sum of even numbers up to N
30. Find sum of odd numbers up to N
31. Check perfect number
32. Print ASCII values from 0 to 127






