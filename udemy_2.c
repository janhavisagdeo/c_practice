RECTANGLE TO CIRCLE AREA PROGRAM

#include <stdio.h>
#define Pi 3.14

int main(int argc, const char * argv[]) {

    double side, area, length;
    double radius, area_circle;

    printf("Please enter the area of the rectangle - area cannot be less than 9 cm^2:");
    scanf("%lf", &area);

    printf("\nPlease enter the side of the rectangle - side cannot be greater than 3 cm:");
    scanf("%lf", &side);

    length = area / side;
    radius = length / 2;
    area_circle = Pi * radius * radius;

    printf("\nThe area of the circle that could encapsule our rectangle is : %f", area_circle);

    return 0;
}
