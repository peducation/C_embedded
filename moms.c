#include <stdio.h>

/* This function will calculate total cost of an item
including VAT*/
double price(double exclusive, double percentage){
    double total_price = exclusive + exclusive*percentage/100;
    return total_price;
}

int main(){
    double cost;
    printf("Enter price of an item excluding VAT: ");
    scanf("%lf", &cost);
    double ttl_cost = price(cost, 25); // Calling to fuction
    printf("The total cost of item is : %.2f", ttl_cost);
}