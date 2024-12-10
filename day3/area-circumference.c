#include<stdio.h>
#define pi 3.14
float area (float rad){
    return pi * rad * rad;
}
float circumference(float rad){
    return 2 * pi * rad;
}
int main(){
    float radius,result;
    printf("enter the number to get area and circumference:");
    scanf("%f",&radius);
    result=area(radius);
    printf("area of the circle for the given radius(%f):%f\n",radius,result);
    result=circumference(radius);
    printf("circumference of the circle for the given radius(%f):%f\n",radius,result);
}