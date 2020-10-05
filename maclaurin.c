#include <stdio.h>
#include <math.h>

int maclaurinseries(int x, int n){
    int fact = 1;
    float sum = 0;
    for(int i = 1; i < n; i++){
        fact = fact*i;
        sum = sum + pow(x,i)/fact;
    }
        sum = 1 + sum;
        return sum;
}

int main(){
    int x, num;
    printf("Enter the value of x in the series: ");
    scanf("%d", &x);
    printf("Enter number of terms:");
    scanf("%d", &num);
    float res =  maclaurinseries(x,num);
    printf(" The result is: %.2f", res);
}