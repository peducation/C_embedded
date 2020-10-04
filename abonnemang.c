/*This program will give you option for subscription*/
#include <stdio.h>
#include<stdlib.h>

int main(){
    int minutes;
    printf("Enter minutes: \n");
    scanf("%d", &minutes);
    if(minutes <= 33){                          //options for subscription depends upon time taken to call someone
        printf("Abonnemang är kontant\n");
    }
    else if(minutes >33 && minutes <= 66){
        printf("Abonnemang är normal\n");
    }
    else
    {
       printf("Abonnemang är plus\n");
    }
    return 0;
}