//Problem4Kalkylator
/*Task is to create small calculator which will do calculations with four
different calculation methods.*/
//Created by Navjot Kaur
//Date: 2020-10-28
#include <stdio.h>
#include <math.h>
#include "kalkylator_beräkningsätt.h"

//declaration of four functions for different calculation methods

float sum(float num1, float num2)
{
    float res;
    res = num1 + num2;
    return res;
}

float subtract(float num1, float num2)
{
    float res;
    res = num1 - num2;
    return res;
}

float mul(float num1, float num2)
{
    float res;
    res = num1 * num2;
    return res;
}

float division(float num1, float num2)
{
    float res;
    res = num1 / num2;
    return res;
}

//Function to give results according to selection of operator by the user
float result(float num1, float num2)
{
    char choice;
    printf("Choose operator '+', '-', '*', '/': ");
    scanf(" %c", &choice);
    switch(choice){
        case '+':
                 printf("The sum of two numbers is: %.2f\n", sum(num1, num2));
                 break;
        case '-':
                 printf("The sum of two numbers is: %.2f\n", subtract(num1, num2));
                 break; 
        case '*':
                 printf("The sum of two numbers is: %.2f\n", mul(num1, num2));
                 break;   
        case '/':
                 printf("The sum of two numbers is: %.2f\n", division(num1, num2));
                 break; 
        default:
                printf("You have entered wrong operator\n");
                 break;
    }
}