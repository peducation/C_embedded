//Problem2Temperature.c
/*This program is to convet temperature from degree Fahrenheit to degree Calcius
using function.*/
//Created by Navjot Kaur
//Date:  2020-10-26
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Function to convert temperature from Farenheit to Degree Celcius
double temp_celcius(double temp_f)
{
    double temp_c = (temp_f - 32) * 5 / 9;
    return temp_c;
}

int main()
{
    //define variables
    double temp_f, temp;
    char ch;

    //Loop to repeat the process if user want to repeat it
    do
    {
        printf("Enter temperature of day in Fahrenheit: ");
        scanf("%lf", &temp_f);
        //Calling to function to give result in degree celcius
        temp = temp_celcius(temp_f);
        printf("Temperature in degree celcius is: %.2f degree Celcius\n", temp);
        if (temp < 0)
        {
            printf("What a cold day! A person want to stay at home\n");
        }
        else
        {
            printf("Such a day! Looking forward to go out.\n");
        }
        //If user want to repeat the process with another value of temperature
        printf("Would do you like to repeat (y/n): ");
        scanf(" %c", &ch);

    }
    //loop to repeat the process until user is going to enter 'y' or 'Y'
    while (ch == 'y' || ch == 'Y');

    return 0;
}