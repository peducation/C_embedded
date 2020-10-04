 /* Mutiplication tabel for numbers 1 to 10*/
 #include <stdio.h>
 #include <math.h>

 int mul_tabel(int n){
     for(int i = 1; i <=10; i++){      // Loop to generate tabel from 1 to 10
         int res = i*n;
         printf("%d   %d\n", i, res);   // display number 1 to 10 and given number's factors
     }
 }

 int main(){
     int number, mul;
     printf("Enter any one number from 1 to 10: ");  // take any number but from 1 to 10 only
     scanf("%d", &number);
     mul = mul_tabel(number);   // calling to function with function name
     printf(mul);
      }