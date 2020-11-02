//Problem1Ränta.c
/*This program is to calculate number of days which required to become
millionare with the condition that one get twice as much as every day as the day before.*/
//Created by Navjot Kaur
//Date: 2020 -10-26
#include <stdio.h>

//Function to calculate number of days to become millionaire
double millionaire(int num_days, double money_day, double total_money)
{
    printf("Enter money to become millionaire: ");
    long long int required_money;
    scanf("%lld", &required_money);
    while (total_money <= required_money)
    {
        num_days++;
        money_day = money_day * 2;
        total_money = total_money + money_day;
    }
    printf("It takes %d days to become millionaire\n", num_days);
}

//Main function to drive the program
int main()
{
    //define and intialize variables
    int num_days = 1;
    double money_day = 1;
    double total_money = 1;

    //Calling to function to diplay result(number of days here)
    millionaire(num_days, money_day, total_money);

    return 0;
}
