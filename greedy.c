#include<cs50.h>
#include<stdio.h>
#include<math.h>
int main(void)
{
    float money;
    int cents,rem=0,quarters,dimes=0,nickels=0,pennies=0,total=0;
    do {
        money = get_float("Enter the amount in dollar : ");
    }
    while(money<0.00);
    cents = round(money*100.0);

    printf("Cents : %d",cents);
    quarters = cents/25;
    rem = cents%25;
    printf("%d",rem);
    if (rem >= 10)
    {
        dimes = rem/10;
        rem = rem%10;
        if (rem >= 5)
        {
            nickels = rem/5;
            rem = rem%5;
            if (rem >= 1){
                pennies = rem/1;
            }
        }
        else
        {
           if (rem >=1)
            {
                pennies = rem/1;

            }
        }

    }
    else
    {
        if (rem >= 5)
        {
            nickels = rem/5;
            rem = rem%5;
            if (rem >=1)
                {
                    pennies = rem/1;
                }
        }
        else
        {
           if (rem >=1)
            {
                pennies = rem/1;
            }
        }

    }


    total = quarters + dimes + nickels + pennies;
    printf("\nNumber of quarters %d\nNumber of dimes %d\nNumber of nickels %d\nNumber of pennies %d\n Total numbers of coins : %d",quarters,dimes,nickels,pennies,total);
}
