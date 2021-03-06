// COMP1511 Week 5 Lab: Circle Facts
//
// This program was written by Jay(z5261536)
// 2019.03.21
//
// This program prints out facts about a circle given its radius,
// using functions.
// M_PI in math.h means pi(3.1415926..)

#include <stdio.h>
#include <math.h>

double area(double radius);
double circumference(double radius);
double diameter(double radius);

// DO NOT CHANGE THIS MAIN FUNCTION
int main(void) {
    double radius;

    printf("Enter circle radius: ");
    scanf("%lf", &radius);

    printf("Area          = %lf\n", area(radius));
    printf("Circumference = %lf\n", circumference(radius));
    printf("Diameter      = %lf\n", diameter(radius));

    return 0;
}


// Calculate the area of a circle, given its radius.
double area(double radius) {
    double area;
    area = M_PI * radius * radius; // TODO: complete this function.
    return area; // TODO: change this to the correct return value.
}

// Calculate the circumference of a circle, given its radius.
double circumference(double radius) {
    double circumference;
    circumference = 2 * M_PI * radius;// TODO: complete this function.
    return circumference; // TODO: change this to the correct return value.
}

// Calculate the diameter of a circle, given its radius.
double diameter(double radius) {
    double diameter;
    diameter = 2 *radius;// TODO: complete this function.
    return diameter; // TODO: change this to the correct return value.
}

