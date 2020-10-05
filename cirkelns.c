#include <stdio.h>
#include<stdlib.h>
#define PI 3.14592653589793

int main(){
    double radius, area, omkrets;
    printf("Enter radius: \n");
    scanf("%lf", &radius);
    if(radius > 0){
        omkrets = 2*PI*radius;
        printf("The circumference of circle is: %.2f meter\n", omkrets);
        area = PI*radius*radius;
        printf("The area of circle is: %.2f square meter\n", area);
    }
    else{
        printf("You have entered wrong radius.\n");
    }

    return 0;
}