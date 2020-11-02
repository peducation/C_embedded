//Problem3Skottår
/*This program is to check whether given year is a leap year or not.
To do this given year must be divisible by 4 or 400 but not by 100. */
//Created by Navjot Kaur
//Date: 2020-10-27
#include<stdio.h>
#include<stdbool.h>

//This function check whether given year is leap year or not and return result as true or false 
bool leap_year(int year){
    if (year % 400 == 0 && year % 100 != 0 || year % 4 == 0)
        return true;
    else
        return false; 
}

//The main function to drive code
int main(){
    //Define the variable
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    //Calling to function to check year is leap year or not.
    bool res = leap_year(year);
    if(res){
        printf("This year is a leap year\n");
    }
    else{
        printf("This is not a leap year\n");
    }
    return 0;
}