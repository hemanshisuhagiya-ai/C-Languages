1.profit and loss percentage

#include<stdio.h>
int main()
{
    int price,sale;
    float per;
    
    printf("Enter Price:");
    scanf("%d",&price);
    
    printf("Enter Sale:");
    scanf("%d",&sale);
    
    if(sale>price)
    {
        per=((sale - price)*100)/price;
        printf("%.2f%% Percentages Profit",per);
    }
    else if(price>sale)
    {
        per=((price-sale)*100)/price;
        printf("%.2f%% Percentages Loss",per );
    }
    else
    {
        printf("No Profit No Loss");
    }
    return 0;
}
//output 
Enter Price:500
Enter Sale:700
40.00% Percentages Profit

2. ammount after interest

#include<stdio.h>
int main()
{
    float amount,emi_month,loan;
    float installment,outstanding;
    float rate=8.8;
    
    printf("Enter Total Loan:");
    scanf("%f",&loan);
    
    // printf("Enter Principal Amount:");
    // scanf("%f",&amount);
    
    printf("Enter Time:");
    scanf("%f",&emi_month);
    
    amount=loan/emi_month;
    outstanding=loan;
    
    printf("\n Outstanding \t Amount\t\tRate\tTime\tInterest\tTotal\n ");
    for(int i=1; i<=emi_month; i++)
    {
        float intrest=(outstanding*rate*1)/100;
        // installment=loan-outstanding;
        outstanding=outstanding-amount;
        printf(" %.2f \t %.2f\t  %.2f \t %.2f \t  %.2f \t %.2f \n",outstanding,amount,rate,emi_month-i,intrest, amount+intrest);
        
    }
       
    return 0;
}



