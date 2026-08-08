1. Hello World Program in C

#include<stdio.h>
int main()
{
    printf("Hello");
    
    return 0;
}

2. Sum of two numbers

#include<stdio.h>
int main()
{
    int a,b;
    
    printf("Enter First Number:");
    scanf("%d",&a);
    
    printf("Enter Second Number:");
    scanf("%d",&b);
    
    int sum=a+b;
    
    printf("sum = %d",sum);
    
    return 0;
}

3. Swap two numbers

#include<stdio.h>
int main()
{
    int a,b,temp;
    
    printf("Enter First Number:");
    scanf("%d",&a);
    
    printf("Enter Second Number:");
    scanf("%d",&b);
    
    temp=a;
    a=b;
    b=temp;
    
    printf("After swapping:\n");
    printf("Swap A=%d\n",a);
    printf("Swap B=%d",b);
    
    return 0;
}

4. Area of circle

#include<stdio.h>
int main()
{
    float radius,area;
    
    printf("Enter Radius:");
    scanf("%f",&radius);
    
    area=3.14*radius*radius;
    
    printf("Area of Circle: %.2f",area);
    
    return 0;
}

5. Celsius to Fahrenheit

#include<stdio.h>
int main()
{
    float c,f;
    
    printf("Enter celcius:");
    scanf("%f",&c);
    
    f=(c*9/5)+32;
    
    printf("celcius to fahrenheit: %.2f",f);
    
    return 0;
}


6. Simple Interest

#include<stdio.h>
int main()
{
    float p,r,t;
    
    printf("Enter principal:");
    scanf("%f",&p);
    
    printf("Enter rate:");
    scanf("%f",&r);
    
    printf("Enter time:");
    scanf("%f",&t);
    
    float simple_interest=(p*r*t)/100;
    
    printf("simple interest: %.2f",simple_interest);
    
    return 0;
}

7. Odd/Even

#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter Number:");
    scanf("%d",&num);
    
    if(num%2==0)
    {
        printf("%d is Even",num);
    }
    else
    {
        printf("%d is odd",num);
    }
    
    return 0;
}

8. Positive/Negative

#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter Number:");
    scanf("%d",&num);
    
    if(num>0)
    {
        printf("%d is Positive",num);
    }
    else if(num<0)
    {
        printf("%d is negative",num);
    }
    else
    {
        printf("Zero");
    }
    
    return 0;
}

9. Largest of 2 numbers

#include<stdio.h>
int main()
{
    int num1,num2;
    
    printf("Enter  First Number:");
    scanf("%d",&num1);
    
    printf("Enter Second Number:");
    scanf("%d",&num2);
    
    if(num1>num2)
    {
        printf("%d is a largest",num1);
    }
    else
    {
        printf("%d is a largest",num2);
    }
    
    return 0;
}

10. Largest of 3 numbers

#include<stdio.h>
int main()
{
    int num1,num2,num3;
    
    printf("Enter  First Number:");
    scanf("%d",&num1);
    
    printf("Enter Second Number:");
    scanf("%d",&num2);
    
    printf("Enter Third Number:");
    scanf("%d",&num3);
    
    if(num1>num2 && num1>num3)
    {
        printf("%d is a largest",num1);
    }
    else if(num2>num3)
    {
        printf("%d is a largest",num2);
    }
    else
    {
        printf("%d is largest",num3);
    }
    
    return 0;
}

11. Leap year

#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter Number:");
    scanf("%d",&num);
    
    if(num%2==0)
    {
        printf("%d is Even"
            ,num);
    }
    else
    {
        printf("%d is odd",num);
    }
    
    return 0;
}

12. Vowel/Consonant

#include<stdio.h>
int main()
{
    char ch;
    
    printf("Enter character:");
    scanf("%c",&ch);
    
    if(ch== 'A' || ch== 'E' || ch== 'I' || ch =='O' || ch== 'U' ||
        ch== 'a' || ch== 'e' || ch =='i' || ch =='o' || ch =='u')
    {
        printf("%c is voewl",ch);
    }
    else
    {
        printf("%c is Consonant",ch);
    }
    
    return 0;
}

13. Grade calculator

#include<stdio.h>
int main()
{
    char ch;
    
    printf("Enter character:");
    scanf("%c",&ch);
    
    if(ch== 'A' || ch== 'E' || ch== 'I' || ch =='O' || ch== 'U' ||
        ch== 'a' || ch== 'e' || ch =='i' || ch =='o' || ch =='u')
    {
        printf("%c is voewl",ch);
    }
    else
    {
        printf("%c is Consonant",ch);
    }
    
    return 0;
}

14. Print 1 to N

#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter number:");
    scanf("%d",&n);
    
    for(int i=1;i<=n; i++)
    {
        printf("%d\n",i);
    }    
    return 0;
}

15. Print N to 1

#include<stdio.h>
int main()
{
    int n;    
    printf("Enter Number:");
    scanf("%d",&n);
    
    for(int i=n;i>=1;i--)
    {
        printf("%d",i);
    }    
    return 0;
}

16. Sum of N numbers

#include<stdio.h>
int main()
{
    int n,sum=0;
    
    printf("Enter Number:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("SUM:%d",sum);
    
    return 0;
}

17. Multiplication table

#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter Number:");
    scanf("%d",&n);
    
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }  
    return 0;
}

18. Reverse number

#include<stdio.h>
int main()
{
    int n,rev=0,rem;
    
    printf("Enter Number:");
    scanf("%d",&n);
    
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }    
    printf("Revered:%d\n",rev);
      
    return 0;
}

19. Count digits

#include<stdio.h>
int main()
{
    int n,count=0;
    
    printf("Enter Number:");
    scanf("%d",&n);
    
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    
    printf("Total Number of Digits:%d\n",count);
      
    return 0;
}

20. Sum of digits

#include<stdio.h>
int main()
{
    int num,sum=0,rem;
    
    printf("Enter Number:");
    scanf("%d",&num);
    
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("SUM of Digits: %d",sum);
    return 0;
}

21. First & last digit sum

#include<stdio.h>
int main()
{
    int num,sum=0,fd,ld;
    
    printf("Enter Number:");
    scanf("%d",&num);
    
    ld=num%10;
    
    while(num>=10)
    {
        num/=10;
    }
    
    fd=num;
    
    sum=fd+ld;
    
    printf("SUM of First Digit and Last Digits: %d",sum);
    return 0;
}

22. Palindrome number

#include<stdio.h>
int main()
{
    int num,rev=0,rem,original=0;
    
    printf("Enter Number:");
    scanf("%d",&num);
    
    original=num;
    
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    
    if(rev==original)
    {
        printf("%d is a Palindrome.",original);
    }
    else
    {
        printf("%d is a Not Palindrome.",original);
    }
    
    return 0;
}

23. Armstrong number

#include<stdio.h>
int main()
{
    int num,sum=0,rem,original;
    
    printf("Enter Number:");
    scanf("%d",&num);
    
    original=num;
    
    while(num!=0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num/=10;
    }
    
    if(sum==original)
    {
        printf("%d is a Armstrong Number.",original);
    }
    else
    {
        printf("%d is a Not Armstrong Number.",original);
    }
    
    return 0;
}

24. Prime number

#include<stdio.h>
int main()
{
    int num,count=0;
    
    printf("Enter Number:");
    scanf("%d",&num);
    
    for(int i=0;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    
    if(count==2)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
    
    return 0;
}

25. Fibonacci series

#include<stdio.h>
int main()
{
    int i,j,num,first=0,next,second=1;
    
    printf("Enter A Number of Terms:");
    scanf("%d",&num);
    
    for(i=0;i<=num;i++)
    {
    //     if(i<=1)
    //     {
    //         next=i;
    //     }
    //      else
    // {
    //     next=first+second;
    //     first=second;
    //     second=next;
    // }
    
    next=first+second;
    
        printf("%d ",next);
       first=second;
       second=next;
    }
    return 0;
}

26. Factorial

#include<stdio.h>
int main()
{
    int i,num;
    long long factorial=1;
    
    printf("Enter A Factorial Number:");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
   
    factorial*=i;
    printf("Factorial is : %lld", factorial);
   
    return 0;
}

27. Magic number

#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter Number:");
    scanf("%d",&num);
    
    while(num>9)
    {
        int sum=0;
        while(num>0)
        {   
            sum+=num%10;
            num=num/10;
        }
         num=sum;
    }  
      
    if(num==1)
    {
        printf("%d is a Magic Number",num);
    }
    else
    {
        printf("%d is NOt Magic Number",num);
    }

    return 0;
}

1. Input and Print Array Elements

#include<stdio.h>
int main()
{
    int i,arr[5];
    
    printf("Enter 5 Elements:\n");
    for(i=0;i<5;i++)
    {
     scanf("%d",&arr[i]);   
    }
    
    printf("Elements:\n");
    for(i=0;i<5;i++)
    {
     printf("%d\n",arr[i]);   
    }
    return 0;
}

2. Sum of Array Elements

#include<stdio.h>
int main()
{
    int i,arr[5],sum=0;
    
    printf("Enter 5 Elements:\n");
    for(i=0;i<5;i++)
    {
     scanf("%d",&arr[i]);   
    }
    
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];    
    }
        printf("Sum:%d\n",sum);
    return 0;
}

3. Input and Print Matrix Elements

#include<stdio.h>
int main()
{
    int row,col,i,j,arr[row][col];
    
    printf("Enter Row:");
    scanf("%d",&row);
    
    printf("Enter Column:");
    scanf("%d",&col);
    
    printf("Enter Elements:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("Elements:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }    
    return 0;
}

4. Find Largest Element in Array

#include<stdio.h>
int main()
{
    int n,i;
    int arr[n];
    
    printf("Enter Size:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int max=arr[0];
    
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    
    printf(" MAX is %d",max);

    
    return 0;
}

5. Find Smallest Element in Array

#include<stdio.h>
int main()
{
    int n,i;
    int arr[n];
    
    printf("Enter Size:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int min=arr[0];
    
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    
    printf(" MIN is %d",min);

    
    return 0;
}

6. Reverse Array

#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter Elements:");

    int arr[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Reverse Elements:");
    for(i=4;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}

7. Search Element in Array



8. Even and Odd Elements in Array
9. Copy One Array to Another
10. Merge Two Arrays
11. Sort Array in Ascending Order
12. Sort Array in Descending Order
13. Find Second Largest Element
14. Find Second Smallest Element
15. Count Even and Odd Numbers
16. Find Duplicate Elements
17. Delete Element from Array
18. Insert Element in Array
19. Linear Search
20. Binary Search
21. Find Frequency of Elements
22. Print Diagonal Elements of Matrix
23. Print Anti-Diagonal Elements of Matrix
24. Sum of Diagonal Elements
25. Sum of Anti-Diagonal Elements
26. Transpose of Matrix
27. Matrix Addition
28. Matrix Subtraction
29. Matrix Multiplication
30. Upper Triangle Matrix
31. Lower Triangle Matrix