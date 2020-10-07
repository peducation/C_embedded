#include <stdio.h>
#include "areor.h"
#include "areor.c"

int main(){
    double length, breadth;
    printf("Enter length: ", length);
    scanf("%lf", &length);
    printf("Enter breadth: ", breadth);
    scanf("%lf", &breadth);
    printf("The area of rectangle is: %.2f", rectangle(length, breadth));
    double radius;
    printf("\nEnter radius: ", radius);
    scanf("%lf", &radius);
    printf("The area of circle is: %.2f", circle(radius));
    double base, height;
    printf("\nEnter base: ", base);
    scanf("%lf", &base);
    printf("Enter height: ", height);
    scanf("%lf", &height);
    printf("The area of triangle is: %.2f", triangle(base, height));
    return 0;
}
