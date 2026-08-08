#include <stdio.h>

int main()
{
    
    //character Data type
    char name[50];
    printf("Please Enter Your Name: ");
    scanf("%s", name);
    printf("Name: %s\n", name);

    //integer Data type
    int age;
    printf(" Please Enter your Age: ");
    scanf("%d", &age);
    printf("Age: %d\n", age);

    //long long Data type
    long long mob;
    printf("Please Enter Your Mobile Number:");
    scanf("%lld", &mob);
    printf("Mobile Number: %lld \n ", mob);
    
    //character Data type
     char address[50];
     printf("Please Enter Your Address:");
     scanf("%s" , address);
     printf("Address: %s\n" ,address);
    
    //float Data type
    float height;
    printf("Please Enter Your Height:");
    scanf("%1f", &height);
    printf("height: %.1f\n" ,height);
    
    return 0;
}