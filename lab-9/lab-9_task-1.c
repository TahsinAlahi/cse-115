#include<stdio.h>
double getArea(int a, int b,int h){
    return (a+b)*h*0.5;
}
void main(){
    int a,b,h;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter h: ");
    scanf("%d",&h);
    printf("Area of trapezoid: %.2lf", getArea(a,b,h));
    return 0;
}
