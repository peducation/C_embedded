#include <stdio.h>

int check_prime(int n){
      for(int i = 2; i < n; i++){
          if(n % i == 0)
            return 0;
          else
            return 1; 
      }
}

int main(){
    int number;
    printf("Enter number to be check prime or not: ");
    scanf("%d", &number);
    int res = check_prime(number);
    if (res == 1){
        printf("%d is a prime number\n", number);
    }
    else
    {
        printf("%d is not a prime number\n", number);
    }     
}