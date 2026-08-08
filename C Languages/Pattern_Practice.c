//pattern in c

## HEMANSHI NAME PRINT 

#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=70;j++)
        {
            if(
            ((j>=1 && j<=5) &&
              (j==1 || j==5 || i==3))
              ||
              
              ((j>=8 && j<=12) &&
              (j==8 || i==1 || i==3 || i==5))
              ||
              
              ((j>=15 && j<=19) && 
              (j==15 || j==19 ||
              (i==2 && (j==16 || j==18)) ||
              (i==3 && j==17)
              ))   
              ||
              
              ((j>=22 && j<=26) &&
              (
              (i==1 && j==24) ||
              (i==2 && (j==23 || j==25)) ||
              (i==3) ||
              (i==4 && (j==22 || j==26 )) ||
              (i==5 && (j==22 || j==26 ))
              )
              )
              ||
              
              ((j>=29 && j<=33) &&
              (
               (j==29 || j==33)||
               (j==28+i)
                ))
            ||
            
            ((j>=36 && j<=40) &&
            (
            (i==1||i==5||i==3)||
            (i==2 && j==36) ||
            (i==4 && j==40)
                ))
            ||
            
            ((j>=43 && j<=47) &&
            (j==43 ||j==47 || i==3))
            ||
            
            ((j>=49 && j<=53) &&
            (j==51 || i==1 ||i==5))    
             
              
              )
              
            {
                printf("*"); 
            }
             else
            {
                 printf(" ");
            }
        }     
        printf("\n");
    }
    
    return 0;
}

//output

*   *  *****  *   *    *    *   *  *****  *   * *****                 
*   *  *      ** **   * *   **  *  *      *   *   *                   
*****  *****  * * *  *****  * * *  *****  *****   *                   
*   *  *      *   *  *   *  *  **      *  *   *   *                   
*   *  *****  *   *  *   *  *   *  *****  *   * *****                 


-------------------------------------------


1.
#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        if(j<=i)
        {
            printf("*");
        }
        else   
        {
            printf(" ");
        }    
        
        printf("\n");
    }
    
    return 0;
}
1.ans 
*
**
***
****
*****

2.

#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        if(j>=6-i)
        {
            printf("*");
        }
        else   
        {
            printf(" ");
        }    
        
        printf("\n");
    }
    
    return 0;
}

2. ans

    *
   **
  ***
 ****
*****


3.

#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        
            if(j<=6-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            printf("\n");
        }      
    return 0;
}

ans.3

*****
 ****
  ***
   **
    *
    
4.

#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        
        if(j<=6-i)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    printf("\n");    
    }    
    return 0;
}

ans.4

*****
****
***
**
*

5. 

#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        
        if(j<=i)
        {
            printf("%d",j);
        }
        else
        {
            printf(" ");
        }
    printf("\n");    
    }
    
    return 0;
}

ans.5

1
12
123
1234
12345

6.

#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        
        if(j<=i)
        {
            printf("%d ",j);
        }
        else
        {
            printf(" ");
        }
    printf("\n");    
    }
    
    return 0;
}

ans.6

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

7.

#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        
        if(j<=6-i)
        {
            printf("%d",j);
        }
        else
        {
            printf(" ");
        }
    printf("\n");    
    }
    
    return 0;
}

ans.7

12345
1234
123
12
1

8.

#include<stdio.h>
int main()
{
    int i,j,k;
    
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=9;j++)
        
        if(j>=6-i && j<=4+i && k)
        {
            printf("*");
            k=0;
        }
        else
        {
            printf(" ");
            k=1;
        }
        printf("\n");
        
    }
}

ans.8

    *
   * *
  * * *
 * * * *
* * * * *

9.

#include<stdio.h>
int main()
{
    int i,j,k;
    
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=9;j++)
        
        if(j>=6-i && j<=4+i && k)
        {
            printf("%d",j);
            k=0;
        }
        else
        {
            printf(" ");
            k=1;
        }
        printf("\n");
        
    }
}

ans.9

    5
   4 5
  3 4 5
 2 3 4 5
1 2 3 4 5

10.

#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
    
        for(j=1;j<=9;j++)
        
        if(j<=6-i || j>=4+i)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
        printf("\n");
        
    }
}

ans.10

*********
**** ****   
***   ***
**     **   
*       *

11.

#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
    
        for(j=1;j<=9;j++)
        
        if(j<=i || j>=10-i)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        
        }
        printf("\n");
        
    }
}

ans.11

*       *
**     **
***   ***
**** ****
*********

12.
#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        if(j<=i)
        {
            printf("%d",j);
        }
        else
        {
            printf(" ");
        }
        printf("\n");
        
    }
}

ans.12

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

13.

#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        if(j>=i)
        {
            printf("%d",j);
        }
        else
        {
            printf(" ");
        }
        printf("\n");
        
    }
}

ans.13

12345
 2345
  345
   45
    5

14.

#include<stdio.h>
int main()
{
    int i,j,k=1;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
        if(j>=6-i && j<=4+i && k)
        {
            printf("%d",k);
            k++;
        }
        else
        {
            printf(" ");
            k=1;
        }
        }
        printf("\n");
        
    }
}

ans.14

    1
  1 2 3
1 2 3 4 5

15.

#include <stdio.h>

int main()
{
    int i,j;
    char k;
    
    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=9;j++)
        
            if(j<=6-i || j>=4+i)
            {
                printf("%c",k);
                k++;
            }
            else
            {
                printf(" ");
            
            }
            printf("\n");
        
    }
    
    return 0;
}

ans.15

ABCDEFGHI
ABCD EFGH
ABC   DEF
AB     CD
A       B

16.

#include <stdio.h>

int main()
{
    int i,j;
    char k;
    
    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=9;j++)
        
            if(j<=6-i || j>=4+i)
            {
                printf("%c",k);
                j<5?k++:k--;
            }
            else
            {
                printf(" ");
                if(j==5)
                {
                    k--;
                }
            
            }
            printf("\n");
        
    }
    
    return 0;
}

ans.16

ABCDEDCBA
ABCD DCBA
ABC   CBA
AB     BA
A       A

17.

#include<stdio.h>
int main()
{
    int i,j,k=1;
    
    
    // printf("Enter Number:");
    // scanf("%d",&n);
    
    for(i=1;i<5;i++)
    {  
        for(j=1;j<9;j++)
        {
            if(j>=6-i && j<=4+i  && k)
            {
                printf("%d",k);
                j<=4?k++:k--;
            }
            else
            {
                printf(" ");
                k=1;
            }
        
        }
        printf("\n");
    }
    
    return 0;
}

ans.17

    1
  1 2 1
1 2 3 2 1
1 2 3 4 3 2 1

18.

#include<stdio.h>
int main()
{
    int i,j,k=0;
    
    for(i=1;i<=7;i++)
    {  
        i<=4?k++:k--;
        for(j=1;j<=7;j++)
        {
            
            if(j>=5-k && j<=3+k)
            {
                printf("*");
            
            }
            else
            {
                printf(" ");
            
            }
        
        }
        printf("\n");
    }
    return 0;
}

ans.18

   *   
  ***  
 ***** 
*******
 ***** 
  ***  
   * 


19.

#include<stdio.h>
int main()
{
    int i,j,k=0;
    
    for(i=1;i<=7;i++)
    {  
        i<=4?k++:k--;
        for(j=1;j<=4;j++)
        {
            
            if(j>=5-k && j<=3+k)
            {
                printf("*");
            
            }
            else
            {
                printf(" ");
            
            }
        
        }
        printf("\n");
    }
    return 0;
}

ans.19

    *
   **
  ***
 ****
  ***
   **
    *

20.

#include<stdio.h>
int main()
{
    int i,j,k=0;
    
    for(i=1;i<=7;i++)
    {  
        i<=4?k++:k--;
        for(j=1;j<=4;j++)
        {
            
            if(j<=k)
            {
                printf("*");
            
            }
            else
            {
                printf(" ");
            
            }
        
        }
        printf("\n");
    }
    return 0;
}

ans.20

*   
**  
*** 
****
*** 
**  
*   

21.

#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {  
        for(j=1;j<=9;j++)
        {
           int k=i;
            if(j>=6-i && j<=4+i)
            {
                printf("%d",k);
            
            }
            else
            {
                printf(" ");
            
            }
        
        }
        printf("\n");
    }
    return 0;
}

ans.21

    1    
   222   
  33333  
 4444444 
555555555
 
22.
#include<stdio.h>
int main() 
{
  int i,j,k;
  // Outer loop
  for (i=1;i<=4; i++)
  {
      k = i;
    for (j=1;j<=7;j++)
      {
       if(j>= 5-i && j<=3+i)
       {
      	    printf("%d",k);
            j<4?k++:k--;
       }
       else{
            	    printf(" ");
       }
      }
      printf("\n");
     }
 
  return 0;
}


ans.22

   1   
  232  
 34543
4567654

23.

#include<stdio.h>
int main()
{
    int i,j,k=0;
    
    for(i=1;i<=7;i++)
    {
        k=i;
        for(j=1;j<=7;j++)
        {
            if(j>=8-i)
            {
                printf("%d",k);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

ans.23

      1
     22
    333
   4444
  55555
 666666
7777777

1111111
222222 
33333  
4444   
555    
66     
7      

24.

#include<stdio.h>
int main()
{
    int i,j,k;
    
    for(i=1;i<=7;i++)
    {
        k=7-i;
        for(j=1;j<=7;j++)
        {
            if(j<=8-i)
            {
                printf("%d",k);
                k--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}


ans.24

6543210
543210 
43210  
3210   
210    
10     
0      

25.

#include<stdio.h>
int main()
{
    int i,j,k;
    
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

ans.25

*******
 ***** 
  ***  
   *   

26.

#include<stdio.h>
int main()
{
    int i,j,k;
    
    for(i=1;i<=5;i++)
    {
        // k=6-i;
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            {
                 printf("%d",j);
                //  k++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

ans.26

    5
   45
  345
 2345
12345


27.

#include<stdio.h>
int main()
{
    int i,j,k;
    
    for(i=1;i<=5;i++)
    {
        k=5;
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            {
                 printf("%d",k);
                 k--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

ans.27

    5
   54
  543
 5432
54321

28.

#include<stdio.h>
int main()
{
    int i,j,k=1;
    
    for(i=1;i<=4;i++)
    {
        
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                 printf("%d",k);
                 k++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

ans.28

1    
23   
456  
78910 

29.

#include<stdio.h>
int main()
{
    int i,j,k;
    
    for(i=1;i<=5;i++)
    {
        k=41;
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                 printf("%d ",k);
                 k++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

ans.29

41    
4142   
414243  
41424344 
4142434445

30.

#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                 printf("*");
                 
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

ans.30

*    
**   
***  
**** 
*****

31.

#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            {
                 printf("*");
                 
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

ans.31

    *
   **
  ***
 ****
*****

32.

#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i && k)
            {
                 printf("*");
                 k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
    
    return 0;
}

ans.32

    *
   * *
  * * *
 * * * *
* * * * *

33.

#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
            {
                 printf("*");
                 
            }
            else
            {
                printf(" ");
                
            }
        }
        printf("\n");
    }
    
    return 0;
}
ans.33

*****
**** 
***  
**   
*    


34.

#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            {
                 printf("*");
                 
            }
            else
            {
                printf(" ");
                
            }
        }
        printf("\n");
    }
    
    return 0;
}

ans.34

*****
 ****
  ***
   **
    *


35.

#include<stdio.h>
int main()
{
    int i,j,k;
    
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=9;j++)
        {
            if(j>=i && j<=10-i && k)
            {
                 printf("*");
                 k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
    
    return 0;
}

ans.35

* * * * *
 * * * * 
  * * *  
   * *   
    *    

36.

#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
         for(j=1;j<i;j++)   // spaces
            {
               printf(" ");
            }

              for(j=1;j<=4;j++)  // 4 stars
                {
                     printf("*");
                }

    printf("\n");
}
    
    return 0;
}

ans.36

****
 ****
  ****
   ****
    ****


37.

#include<stdio.h>
int main()
{
    int i,j,k=0;
    
    for(i=1;i<=9;i++)
    {
        i<=5?k++:k--;
         for(j=1;j<=9;j++)   
            {
                if(j>=6-k && j<=4+k)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }

    printf("\n");
}
    
    return 0;
}

ans.37

    *    
   ***   
  *****  
 ******* 
*********
 ******* 
  *****  
   ***   
    *    

38.    

#include<stdio.h>
int main()
{
    int i,j,k=0,s=1;
    
    for(i=1;i<=9;i++)
    { 
        i<=5?k++:k--;
        for(j=1;j<=9;j++)
        {
            if(j>=6-k && j<=4+k && s)
            {
                printf("*");
                s=0;
            }
            else
            {
                printf(" ");
                s=1;
            }
        }
        printf("\n");
    }
    
    return 0;
}

ans.38

    *    
   * *   
  * * *  
 * * * * 
* * * * *
 * * * * 
  * * *  
   * *   
    *    
39.

#include <stdio.h>
int main()
{
  int i,j,k=0;
  
  for(i=1;i<=9;i++)
  {
      i<=5?k++:k--;
      for(j=1;j<=9;j++)
      
          if(j>=k && j<=10-k)
          {
              printf("*");
          }
          else
          {
              printf(" ");
          }
          printf("\n");
      
  }

    return 0;
}

ans.39

*********
 ******* 
  *****  
   ***   
    *    
   ***   
  *****  
 ******* 
*********

40.
#include <stdio.h>
int main()
{
  int i,j,k=0,s=1;
  
  for(i=1;i<=9;i++)
  {
      i<=5?k++:k--;
      for(j=1;j<=9;j++)
      
          if(j>=k && j<=10-k && s)
        // if(j>=6-k && j<=4+k)
          {
              printf("*");
              s=0;
          }
          else
          {
              printf(" ");
              s=1;
          }
          printf("\n");
      
  }

    return 0;
}
ans.40

* * * * *
 * * * * 
  * * *  
   * *   
    *    
   * *   
  * * *  
 * * * * 
* * * * *


41.

#include <stdio.h>
int main()
{
  int i,j;
  
  for(i=1;i<=5;i++)
  {
     
      for(j=1;j<=5;j++)
      
          if(i==1 || i==5 || j==1 || j==5 )
        
          {
              printf("*");
             
          }
          else
          {
              printf(" ");
             
          }
          printf("\n");
      
  }

    return 0;
}

ans.41

*****
*   *
*   *
*   *
*****


42.
#include<stdio.h>
int main()
{
    int i,j,k=5;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==1)
            {
                printf("%d",i);
            }
            else if(i==1)
            {
                printf("%d", j);
            }
            else if(j==6-i)
            {
                printf("%d",k);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

ans

12345
2  5 
3 5  
45   
5    


43.
#include<stdio.h>
int main()
{
    int i,j;
    char ch='a';
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j==i || j==8-i) 
            {
                printf("%c",ch);
                
            }
            
            else
            {  
                printf(" ");
                
            }
        }
        printf("\n");
        ch++;
    }
}

ans:

a     a
 b   b 
  c c  
   d   
  e e  
 f   f 
g     g


44.
#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==1 || j==i || i==5) 
            {
                printf("%d",j);
                
            }
            
            else
            {  
                printf(" ");
                
            }
        }
        printf("\n");
        
    }
}

ans:

1    
12   
1 3  
1  4 
12345

45.

#include <stdio.h>

int main() 
{
    int i, j;
    int num = 1;     
    char ch = 'B';   
    int toggle = 1;  

    for (i = 1; i <= 5; i++) 
    {
        // Print single spaces for alignment (2 spaces per skipped item)
        for (j = 1; j < i; j++) 
        {
            printf(" ");
            printf(" ");
        }

        // Print the numbers and letters
        for (j = i; j <= 5; j++) 
        {
            if (toggle == 1) 
            {
                printf("%d ", num);
                num += 2;      
                toggle = 0;    
            } 
            else 
            {
                printf("%c ", ch);
                ch += 2;       
                toggle = 1;    
            }
        }
        
        printf("\n"); 
    }

    return 0;
}

ans.

1 B 3 D 5 
  F 7 H 9 
    J 11 L 
      13 N 
        15 


45.











 