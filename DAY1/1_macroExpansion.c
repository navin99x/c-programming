// macro expansion is a type of preprocessor directive used to define constant or create anonymous function

#include<stdio.h>
#define PI 3.14
#define AREA(r) (PI*r*r)

int main()
{
    float radius, area;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    area= AREA(radius);
    printf("Area: %.2f", area);
}