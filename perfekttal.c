/* To check a number is perfect or not*/
#include <stdio.h>

int perfectnumber(int num){           
    int sum = 0;
    /* Loop to calculate value of sum of positive integers*/
    for(int i = 1; i < num; i++){         
    if(num % i == 0){      
        sum = sum + i;
    }
  }
  return sum;
}


int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int res = perfectnumber(n);
    // Conditions to check number is perfect or not
    if(res == n){            
        printf("Given number is a perfect number. \n");
    }
    else{
         printf("Given number is not a perfect number.\n");
    }
}