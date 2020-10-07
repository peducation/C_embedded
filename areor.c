#include <stdio.h>
#include "areor.h"

double rectangle(double length, double breadth){
    double area_rect = length*breadth;
    return area_rect;
}

double circle(double radius){
    double area_circle = PI*radius*radius;
    return area_circle;
}

double triangle(double base, double height){
    double area_triangle = (base*height)*1/2;
    return area_triangle;
}
