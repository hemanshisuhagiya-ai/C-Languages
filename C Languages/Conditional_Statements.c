*Easy: If, Else, and Basics*

Warm-up logic to test syntax and simple conditions.

1 - Even or Odd: Write a program to check if a number is even or odd.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter Your Number:");
    scanf("%d",&num);
    
    if(num%2==0)
    {
        printf("Even");
    }
    else{
        printf("odd");
    }
        
    return 0;
}


2 - Voting Eligibility: Check if a person is 18 or older; if not, calculate how many years they have left to wait.

#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d",&age);
    
    if(age>=18)
    {
        printf("Eligible");
    }
    else
    {
        printf("Wait %d Years", 18-age);
    }
    
    
    return 0;
}


3 - The Largest of Two: Take two numbers and print the larger one.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Your First Number:");
    scanf("%d", &a);
    
    printf("Enter Your Second Number:");
    scanf("%d", &b);
        
    if(a>b)
    {
        printf("%d is a larger",a);
    }
    else{
        printf("%d is a larger",b);
    }
    
    return 0;
}

4 - Positive, Negative, or Zero: Use an if...else ladder to categorize a number.

#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter Your Number:");
    scanf("%d",&num);
    
    if(num>0)
    {
        printf("Positive Number");
    }
    else if(num<0)
    {
        printf("Negative Number");
    }
    else
    {
        printf("Zero");
    }
}


5 - Pass/Fail: If a student scores > 40, they pass. Otherwise, they fail.

#include<stdio.h>
int main()
{
    int marks;
    
    printf("Enter Your marks:");
    scanf("%d",&marks);
    
    if(marks>40)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    
    return 0;
}

6- Divisible by 5: Check if a number is divisible by 5.

#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter Your Number:");
    scanf("%d",&num);
    
    if(num%5==0)
    {
        printf("Divide by 5");
    }
    else{
        printf("Not Divided by 5");
    }
    
    return 0;
}

7 - Age Group: Categorize a person as Child (<13), Teenager (13-19), or Adult (20+).
#include<stdio.h>
int main()
{
    int age;
    
    printf("Enter Your Age:");
    scanf("%d",&age);
    
    if(age<13)
    {
        printf("Child");
    }
    else if(age<=19)
    {
        printf("Teenager");
    }
    else{
        printf("Adult");
    }
    
    return 0;
}

8 - Grade Calculator: Assign grades based on marks (A for 90+, B for 80-89, C for 70-79, D for 60-69, F for <60).

#include<stdio.h>

int main()
{

    int marks;
    
    printf("Enter your marks:");
    scanf("%d",&marks);
    printf("Marks %d\n",marks);
    
    if(marks>=90)
    {
        printf("A grade");
    }
    
    else if(marks>=80)
    {
        printf("B grade");
    }
    
    else if(marks>=70)
    {
        printf("C grade");
    }
    
    else if (marks>=60)
    {
        printf("D grade");
    }
    
    else
    {
        printf("Fail");
    }
    return 0;
}

9 - Smallest of Two: Take two numbers and print the smaller one.

#include<stdio.h>
int main()
{
    int a,b;
    
    printf("Enetr Your First Number:");
    scanf("%d",&a);
    
    printf("Enetr Your First Number:");
    scanf("%d",&b);
    
    if(a<b)
    {
        printf("%d is a small",a);
    }
    else
    {
        printf("%d is a small",b);
    }
        
    return 0;
}

10 - Leap Year: Check if a year is a leap year (divisible by 4, but not by 100 unless also divisible by 400).

#include<stdio.h>
int main()
{
    int year;
    
    printf("Enetr Your Year:");
    scanf("%d",&year);
    
   if(year%4==0)
   {
       printf(" %d is a Leap Year",year);
   }
   else
   {
       printf("%d is a Not Leap Year",year);
   }
    
    return 0;
}

11 - Salary Increment: If salary is >= 50000, give a 10% increment; otherwise, give a 5% increment.
#include<stdio.h>
int main()
{
    int salary;
    
    printf("Enetr Your salary:");
    scanf("%d",&salary);
    
   if(salary>=50000)
   {
       int final_amount=salary+(salary*10)/100;
       printf("%d",final_amount);
    
    }
   else if(salary<=50000)
   {
       int final_amount=salary+(salary*5)/100;
       printf("%d",final_amount);
   }
   
    return 0;
}

12 - Largest of Four: Take four numbers and print the largest one.

#include<stdio.h>
int main()
{
    int a,b,c,d;
    
    printf("Enter Your First Number:");
    scanf("%d",&a);
    
    printf("Enter Your Second Number:");
    scanf("%d",&b);
    
    printf("Enter Your Three Number:");
    scanf("%d",&c);
    
    printf("Enter Your fourth Number:");
    scanf("%d",&d);
    
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("A is largest");
            }
            else{
                printf("D is largest");
            }
        }
        else
        {
            if(c>d)
            {
                printf("C is largest");
            }
            else
            {
                printf("D is largest");
            }
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                printf("B is largest");
            }
            else
            {
                printf("D is largest");
             }
        }
        else
        {
            if(c>d)
            {
                printf("C is largest");
            }
            else
            {
                printf("D is largest");
            }
        }
    }
        
    return 0;
    
}

13 - Largest of Three: Take three numbers and print the largest one.

#include<stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter Your First Number:");
    scanf("%d",&a);
    
    printf("Enter Your Second Number:");
    scanf("%d",&b);
    
    printf("Enter Your Three Number:");
    scanf("%d",&c);
    
    if(a>b)
    {
        if(a>c)
        {
            printf("A is largest");
        }
        else{
            printf("C is largest");
        }
    }
    else
    {
        if(b>c)
         {
             printf("B is largest");
         }
         else
        {
              printf("C is largest");
        }
    }
        
    return 0;
    
}

14 - Vowel or Consonant: Check if a character is a vowel or consonant.

#include<stdio.h>
int main()
{
    char ch;
    
    printf("Enter Your Character:");
    scanf("%c" , &ch);
    
    if (ch=='a'||ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    
    return 0;
    
}

