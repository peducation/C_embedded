 #include <stdio.h>
 #include <math.h>

 int mul_tabel(int n){
     for(int i = 1; i <=10; i++){
         int res = i*n;
         printf("%d   %d\n", i, res);
     }
 }

 int main(){
     int number, mul;
     printf("Enter any one number from 1 to 10: ");
     scanf("%d", &number);
     mul = mul_tabel(number);
     printf(mul);
      }