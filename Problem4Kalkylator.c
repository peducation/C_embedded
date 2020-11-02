//Problem4Kalkylator
/*Task is to create small calculator which will do calculations with four
different methods. It also includes to make functions in separate file*/
//Created by Navjot Kaur
//Date: 2020-10-28

#include <stdio.h>
#include <math.h>
#include "kalkylator_beräkningsätt.h"
#include "kalkylator_beräkningsätt.c"

//Main function to drive code
int main()
{
    int value;
    //Loop to repeat the calculations continously
    while(1){
        //Define the variables
        float num1, num2;
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        //Calling to function to get result
        result(num1, num2);
        printf("Once again (1 for yes, 0 for stop):");
        scanf("%d", &value);
    } 
    
    return 0;
}