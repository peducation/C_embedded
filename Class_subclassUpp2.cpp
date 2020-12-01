/*This program is to make a base class and sub-classes*/
//Creadted by Navjot Kaur
//Date: 2020-11-18

#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1423; //Defining and intialize value of pi

//The base class
class Shape{
protected:
    double radius;
    double height;
public:
    Shape(){
        cout <<"Constructor is created"<<endl;
    }
//defining member functions inside the class
    void setRadius(double r);
    void setHeight(double h);
    void getRadius();
    void getHeight();
};

//Declaration of member functions outside the class
void Shape:: setRadius(double r){
        radius = r;
    }
    void Shape:: setHeight(double h){
        height = h;
    }

    void Shape:: getRadius(){
        cout <<"Enter radius: "; cin>>radius;
    }
    void Shape:: getHeight(){
        cout <<"Enter height: "; cin >>height;
    }

//The subclasses
class Sphere: public Shape{
public:
    double getVolume_Sphere();
    double getArea_Sphere();
};

double Sphere::getVolume_Sphere()
{
    return 4 * PI * pow(radius, 3) / 3;
}
double Sphere::getArea_Sphere()
{
    return 4 * PI * radius * radius;
}

class Cone: public Sphere{
public:
    double getVolume_Cone();
};


double Cone::getVolume_Cone()
{
    return (PI * pow(radius, 2) * height) / 3;
}

class Circle: public Cone{
public:
    double getArea_Circle();
};

double Circle::getArea_Circle()
{
    return PI * pow(radius, 2);
}

//Main function to drive code
int main(){
    Circle circle;   //Defining object

    circle.getRadius();
    circle.getHeight();

    cout <<"The volume of Sphere is: "<<circle.getVolume_Sphere() <<endl;
    cout <<"The area of Sphere is: "<<circle.getArea_Sphere() <<endl;
    cout <<"The volume of Sphere is: "<<circle.getVolume_Cone() <<endl;
    cout <<"The volume of circle is: "<<circle.getArea_Circle() <<endl;
    cout <<"------------------------------------------------"<<endl;

    Circle circle2;        //Defining second object
    circle2.setRadius(2);
    circle2.setHeight(3);

    cout <<"The volume of Sphere is: "<<circle2.getVolume_Sphere() <<endl;
    cout <<"The area of Sphere is: "<<circle2.getArea_Sphere() <<endl;
    cout <<"The volume of Sphere is: "<<circle2.getVolume_Cone() <<endl;
    cout <<"The volume of circle is: "<<circle2.getArea_Circle() <<endl;

    return 0;
}