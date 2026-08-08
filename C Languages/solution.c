//Wap in c  to Swap two variables (with sing third variable).

#include<stdio.h>
int main()
{
    int a,b,temp;
    
    printf("Enter A:");
    scanf("%d",&a);
    
    printf("Enter B:");
    scanf("%d",&b);
    
    temp=a;
    a=b;
    b=temp;
    
    printf("After Swpping\n");
    printf("A: %d\n",a);
    printf("B: %d",b);
    
    return 0;
}

//WAP in c  Swap two variables (without using third variable)

#include<stdio.h>
int main()
{
    int a,b;
    
    printf("Enter A:");
    scanf("%d",&a);
    
    printf("Enter B:");
    scanf("%d",&b);
    
   a=a+b;
   b=a-b;
   a=a-b;
    
    printf("After Swpping\n");
    printf("A: %d\n",a);
    printf("B: %d",b);
    
    return 0;
}

# convert temperature from degree celsius to fahrenheit

#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    
    printf("Enter fahrenheit in celsius:");
    scanf("%f",&celsius);
    
    fahrenheit=(celsius * 9 /5) + 32;
    
    printf("%.2f celsius = %.2f fahrenheit" ,celsius,fahrenheit);
   
    return 0;
}


#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    
    printf("Enter Temperature in fahrenheit:");
    scanf("%f",&fahrenheit);
    
    celsius=(fahrenheit-32) *5 /9;
    
    printf("celsius = %.2f " ,celsius);
   
    return 0;
}


Gross Salary = Basic + HRA + DA + Allow – PF

#include<stdio.h>
int main()
{
    float bs,da,hra,pf;
    
    printf("Enter base salary:");
    scanf("%f",&bs);
    
    printf("Enter HRA:");
    scanf("%f",&hra);
    
    printf("Enter DA:");
    scanf("%f",&da);
    
    printf("Enter Pf:");
    scanf("%f",&pf);
    
    float hra1=(hra/100)* bs;
    float da1 =(da/100)*bs;
    float pf1=(pf/100)*bs;
    
    float gs= bs+hra1+da1-pf1;
    printf("Gross Salary: %.2f RS",gs);
    
    return 0;
}

Allow = 1700 if grade = ‘A’ 
Allow = 1500 if grade = ‘B’ 
Allow = 1300 if grade = ‘C’ 

#include<stdio.h>
int main()
{
    float bs,da,hra,pf;
    char grade;
    float allow;
    
    printf("Enter base salary:");
    scanf("%f",&bs);
    
    printf("Enter HRA:");
    scanf("%f",&hra);
    
    printf("Enter DA:");
    scanf("%f",&da);
    
    printf("Enter Pf:");
    scanf("%f",&pf);
    
    printf("Enter Grade:");
    scanf(" %c",&grade);
    
    float hra1=(hra/100)* bs;
    float da1 =(da/100)*bs;
    float pf1=(pf/100)*bs;
    
    if(grade=='A')
    {
        allow=1700;
    }
    else if (grade=='B')
    {
        allow=1500;
    }
    else
    {
        allow=1300;
    }
    
    float gs= bs+hra1+da1+allow-pf1;
    float gs1=bs+hra1+da1+allow+pf1;
    
    printf("Gross Salary: %.2f RS\n",gs);
    printf(" Total Salary: %.2f RS",gs1);
    
    return 0;
}

// C program to illustrate  \a escape sequence
#include<stdio.h>
int main()
{
    printf("Warning!\a");
    return 0;
}

#include <stdio.h>
 
int main(void)
{
    // output may depend upon the compiler
    printf("\t\t*\t\t\t*\t\t\t\t\t\t\t\n");
    printf("\t*\t\t\t*\t\t\t\t\t\t\t\t\n");
    printf("*\t\t\t*\t\t\t\t\t\t\t\t\t\n");
    printf("\t*\t\t\t*\t\t\t\t\t\t\t\t\n");
    printf("\t\t*\t\t\t*\t\t\t\t\t\t\t\n");
  
    return (0);
}

// practical 1 : Write a program in C to check whether a character is an alphabet, digit or special character.

#include<stdio.h>
int main()
{
    char ch;
    
    printf("Enter Character:");
    scanf("%c",&ch);
    
    if(ch>='a'&& ch<='z' || ch>='A'&& ch<='Z')
    {
        printf("%c is a Alphabets",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("%c is a Numeric",ch);
    }
    else
    {
        printf("%c is a special Character",ch);
    }
    return 0;
}

// practical 2 : Write a program in C to check whether a number is even or odd using the ternary operator.

#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter Number:");
    scanf("%d",&num);
    
    // Check if the number is even or odd using the ternary operator
   (num%2==0)?printf("%d is Even\n",num) :printf("%d is odd",num);
   
    return 0;
}

// practical 3 : unit charges and total bill calculation 

#include<stdio.h>
int main()
{
    float unitCharges,totalbill;
    
    printf("Enter Unitcharges:");
    scanf("%f",&unitCharges);
    
    if(unitCharges<=50)
    {
        totalbill=unitCharges*0.50;
        printf("%.2f Unitcharges 0.50 \n",unitCharges);
    }
    else if(unitCharges<=150)
    {
        totalbill=(50*0.50) + (unitCharges-50)*0.75;
         printf("%.2f Unitcharges 0.75 \n",unitCharges);
    }
    else if(unitCharges<=250)
    {
        totalbill=(50*0.50)+(100*0.75)+(unitCharges-150)*1.20;
        printf("%.2f Unitcharges 1.20 \n",unitCharges);
    }
    else
    {
        totalbill=(50*0.50)+(100*0.75)+(150*1.20)+(unitCharges-250)*1.50;
    }
    
    totalbill=totalbill+(0.20 * totalbill);
    printf("Total Bill:%.2f",totalbill);
    
    return 0;
}

# write program in c find area of circle

#include<stdio.h>
int main()
{
    float radius,area;
    
    printf("Enter radiusof the circle:");
    scanf("%f",&radius);
    
    area=3.14*radius*radius;
    
    printf("Area:%.2f is %.2f",radius,area);
    
    return 0;
}

# Area Of Square.

#include<stdio.h>
int main()
{
    float side,area;
    
    printf("Enter side length of the square:");
    scanf("%f",&side);
    
    area=side*side;
    
    printf("Area:%.2f",area);
    
    return 0;
}

# Area of Rectangle

#include<stdio.h>
int main()
{
    float height,width,area;
    
    printf("Enter height:");
    scanf("%f",&height);
    
    printf("Enter width:");
    scanf("%f",&width);
    
    area=height*width;
    
    printf("The area of the rectangle with height %.2f and width %.2f is %.2f\n", height, width, area);
    
    return 0;
}

# Area of triangle

#include<stdio.h>
int main()
{
    float height,base,area;
    
    printf("Enter height:");
    scanf("%f",&height);
    
    printf("Enter base:");
    scanf("%f",&base);
    
    area=0.5*height*base;
    
    printf("The area of the triangle with height %.2f and base %.2f is %.2f\n", height, base, area);
    
    return 0;
}

# simple interest

#include<stdio.h>
int main()
{
    float principal,rate,time,simpeInterest;
    
    printf("Enter principal:");
    scanf("%f",&principal);
    
    printf("Enter rate:");
    scanf("%f",&rate);
    
    printf("Enter Time:");
    scanf("%f",&time);
    
    simpeInterest=(principal*rate*time)/100;
    
    printf("Simple Interest : %.2f\n", simpeInterest);
    
    return 0;
}

//Perimeter of the Circle in c

#include<stdio.h>
int main()
{
    float radius,circumference;
    
    printf("Enter radius of the circle:");
    scanf("%f",&radius);
    
    circumference=2*3.14*radius;
   
    printf("circumference : %.2f\n", circumference);
    
    return 0;
}

//(x+y)2.

#include<stdio.h>
int main()
{
    float x,y,result;
    
    printf("Enter X:");
    scanf("%f",&x);
    
    printf("Enter Y:");
    scanf("%f",&y);
    
    result=(x+y)*(x+y);
   
    printf("X+Y : %f\n", result);
    printf("The square of the sum (%.2f + %.2f)^2 is %.2f\n", x, y, result);
    
    return 0;
}

//(x-y)2.

#include<stdio.h>
int main()
{
    float x,y,result;
    
    printf("Enter X:");
    scanf("%f",&x);
    
    printf("Enter Y:");
    scanf("%f",&y);
    
    result=(x-y)*(x-y);
   
    printf("X+Y : %f\n", result);
    printf("The square of the sum (%.2f - %.2f)^2 is %.2f\n", x, y, result);
    
    return 0;
}

// (x+y)3. pow function pow(1*1*1) math library import

#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,result;
    
    printf("Enter X:");
    scanf("%f",&x);
    
    printf("Enter Y:");
    scanf("%f",&y);
    
    result= pow(x+y,3);
   
    printf("(%lf + %lf)^3 = %lf\n", x, y, result);
    
    return 0;
}

// (x+y+z)3.

#include <stdio.h>

int main() {
    double x, y, z;
    
    // Prompt the user to enter the values of x, y, and z
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    
    printf("Enter the value of y: ");
    scanf("%lf", &y);
    
    printf("Enter the value of z: ");
    scanf("%lf", &z);
    
    
    // Calculate the expanded form of (x + y + z)^3
     double result = x*x*x + 3*x*x*y + 3*x*y*y + y*y*y + 3*x*x*z + 3*x*y*z + 3*y*y*z + z*z*z;
    //  double result=(x+y+z)*(x+y+z);
    
    // Display the result
    printf("(x + y + z)^3 = %.2f\n", result);
    
    return 0;
}



1. Print all alphabets from 'a' to 'z' using a do-while loop:

#include<stdio.h>
int main()
{
    char ch= 'a';    
    while(ch<='z')
    {
        printf("%c",ch);
        ch++;
    }    
}

2. Print the multiplication table of any number:

#include<stdio.h>
int main()
{
    int num;
    
    printf("ENTER NUMBER:");
    scanf("%d",&num);
    
    for( int i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}

3. Count the number of digits in a number:

#include<stdio.h>
int main()
{
    long long int num,count=0;
    
    printf("ENTER NUMBER:");
    scanf("%lld",&num);
    
    while(num!=0)
    {
        num/=10;
        count++;
    }
    printf("Number of Digits:%d",count);
    
    return 0;
}

4. Check if a number is prime or not:


#include<stdio.h>
int main()
{
    int num,count=0;
    
    printf("Enter Your Number:");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++)
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
            printf(" Not Prime Number");
        } 
    return 0;
}

5. Check if a number is a magic number or not:

#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter Number:");
    scanf("%d",&num);
    
    if(num>0 && num%9==1)
    {
        printf("%d is Magic Number",num);
    }
    else
    {
        printf("%d is not Magic Number",num);
    }
    
    return 0;
}
------------------------------------
1729= 1+7+2+9=19
19=1+9=10
10=1+0=1
1 = is magic number

#include<stdio.h>
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
            num/=10;
        }
        num=sum;
    }
    
    if(num==1)
    {
        printf("%d is Magic Number",num);
    }
    else
    {
        printf("%d is not Magic Number",num);
    }
    
    return 0;
}
---------------------------
19*91 = 1729

#include<stdio.h>
int main()
{
    int num,rem,sum=0,temp,magic,reverse=0;
    
    printf("Enter Number:");
    scanf("%d",&num);
    
    temp=num;
    
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num/=10;
    }
    printf("sum: %d \n",sum);
    int s=sum;
    
    while(s!=0)
    {
        rem=s%10;
        reverse=reverse*10+rem;
        s/=10;
    }
    printf("reverse sum: %d\n",reverse);
    
    magic=reverse*sum;
    printf("reverse number: %d\n",magic);
    
    if(temp==magic)
    {
        printf("Magic Number");
    }
    else
    {
        printf("Not magic");
    }
    
    return 0;
}
--------------------------------

5. Enter a number, print its reverse, and check if it's a palindrome:

#include<stdio.h>
int main()
{
    int reverse=0,rem,num,original;
    
    printf("Enter Number:");
    scanf("%d",&num);
    
    original=num;
    
    while(num!=0)
    {
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }
    
   printf("reverse: %d\n",reverse);
   
   if(original==reverse)
   {
       printf("Palindrome");
   }
   else
   {
       printf("Not palindrome");
   }
    
    return 0;
}

6. Calculate the factorial of a number:

#include<stdio.h>
int main()
{
    int num,i,factorial=1;
    
    printf("Enter number:");
    scanf("%d",&num);
    
    for(i=1; i<=num; i++)
    {
        factorial*=i;
    }
     printf("factorial of %d = %d\n",num,factorial);
    
    return 0;
}

7. Print the Fibonacci series:















// Array in c

#include<stdio.h>
int main()
{
    int i,j,arr[3][2];
    
    printf("Enter Elements:\n");
    
    for( i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
           scanf("%d",&arr[i][j]); 
        }
    }
    
    printf("Elements are:\n");
    {        
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
          printf("%d\t",arr[i][j]);  
        }
        printf("\n");    
    }
 } 
    return 0;
}

// Write a program in C to find the sum of the two diagonals of a square matrix.

#include<stdio.h>
int main()
{
    int row,col;
    
    printf("Enter Row:");
    scanf("%d",&row);
    
    printf("Enter Columns:");
    scanf("%d",&col);
    
    if(row!=col)
    {
        printf("the array must be same for diagonal");
        return 1;
    }
    
    int arr[row][col];
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    int crossDiagonalSum=0;
    
    for(i=0;i<row;i++)
    {
        crossDiagonalSum+=arr[i][i];
        crossDiagonalSum+=arr[i][col-i-1];
    }
    
    printf("crossDiagonalSum= %d\n",crossDiagonalSum);
    
    return 0;
}

// Write a program in C to find the average of marks of a student in five subjects.

#include<stdio.h>
int main()
{
    
   int i;
   double marks[5];
   
   printf("Enter Marks:");
   
   for(i=0;i<5;i++)
   {
       scanf("%lf",&marks[i]);
   }
   
   double sum=0;
   
   for(i=0;i<5;i++)
   {
       sum=marks[i]+sum;
   }
   
   double avg_marks=sum/5;
   printf(" The average marks of a student:%.2lf",avg_marks);
       
    return 0;
}

// Write a program in C to find the sum of the two diagonals of a square matrix.

#include<stdio.h>
int main()
{
    int row,col;
    
    printf("Enter Row:");
    scanf("%d",&row);
    
    printf("Enter Column:");
    scanf("%d",&col);
    
    if(row!=col)
    {
        printf("Array must be square for cross diagonal ");
        return 1;
    }
    
    
    int i,j,arr[row][col];
    printf("Enter Elements for 2-D Array:\n");
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("Transpose:\n");
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    
    printf("Main Diagonal:\n");
    
    for(i=0;i<row;i++)
    {
        printf("%d\n",arr[i][i]);
    }
    
    printf("Anti- Diagonal:\n");
    
    for(i=0;i<row;i++)
    {
        printf("%d\n",arr[i][col-i-1]);
    }
 
    
    int cd=0;
    
    for(i=0;i<row;i++)
    {
    cd=cd+arr[i][i];
    cd=cd+arr[i][col-i-1];
    }
    printf("cross diagonal sum:%d",cd);
       
    
    return 0;
}

---------------------------
array transpose, sum of elements, sum of border elements, diagonal and anti-diagonal elements in c
---------------------------
#include<stdio.h>
int main()
{
    int row,col,i,j,sum=0;

    printf("Enter Row:");
    scanf("%d",&row);
    
    printf("Enter Column:");
    scanf("%d",&col);
    
    printf("Enter Elements:\n");
    
    int arr[row][col];
    
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
            printf("%d  ",arr[i][j]);
        }
         printf("\n");
    }
    
    
    printf("Trnaspose Matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",arr[j][i]);
        }
         printf("\n");
    }
    
  
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum=sum+arr[i][j];
            
        }
        
    }
    
    
    printf("Sum of Elements:%d\n",sum);
    sum=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i == 0 || i == row-1 || j == 0 || j == col-1)
            {
                 sum+=arr[i][j];
            }
        }
    }
    printf("Sum of Border Elements:%d\n",sum);
    
    
    printf("Dia-gonal Elements:\n");
    int diasum=0;
    for(i=0;i<row;i++)
    {
        printf("%d\n",arr[i][i]);
        diasum+=arr[i][i];
    }
    printf("Sum of diagonal:%d\n",diasum);
    
    // for(i=0;i<row;i++)
    // {
    //     for(j=0;j<col;j++)
    //     {
    //         if(i==j)
    //         {
    //         printf("Diagonal:%d  ",arr[i][j]);
    //         }
    //     }
    //      printf("\n");
    // }
    
    
    printf("Aunti - Diagonal Elements:\n");
    int antisum=0;
    for(i=0;i<row;i++)
    {
        printf("%d\n",arr[i][col-i-1]);
        antisum+=arr[i][col-i-1];
    }
    printf("Sum of anti-diagonal:%d\n",antisum);
    
    
    
    printf("Cross - diagonal Elements:\n");
    int cdsum=0;
    for(i=0;i<row;i++)
    {
          printf("%d  %d\n",arr[i][i],arr[i][col-i-1]);
          
          cdsum+=arr[i][i]+arr[i][col-i-1];
    }
    printf("Sum of cross-diagonal:%d\n",cdsum);
    
    return 0;
}

-----------------------------
frequency count of elements in an array in c
---------------------------
#include<stdio.h>
int main()
{
    int num, i, j, count;

    printf("Enter array Size: ");
    scanf("%d", &num);

    int arr[num], fre[num];
    
    printf("Enter Elements: ");
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
        fre[i] = -1;     // Initialize frequency array
    }

    for(i = 0; i < num; i++)
    {
        count = 1;

        if(fre[i] == 0)     //duplicate તરીકે mark થયો હોય તો skip.
            continue;

        for(j = i + 1; j < num; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                fre[j] = 0;
            }
        }

        fre[i] = count;
    }

    printf("\nThe frequency of all elements of the array:\n");

    for(i = 0; i < num; i++)
    {
        if(fre[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], fre[i]);
        }
    }

    return 0;
}

------------------------------
#include<stdio.h>

int main()
{
    int arr[100], n, i, j, count;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 0;

        // Check if element already appeared before
        for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
                break;
        }

        if(j == i)
        {
            for(j = 0; j < n; j++)
            {
                if(arr[i] == arr[j])
                    count++;
            }

            printf("%d occurs %d times\n", arr[i], count);
        }
    }

    return 0;
}

