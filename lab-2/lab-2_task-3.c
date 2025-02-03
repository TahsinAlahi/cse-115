#include<stdio.h>
#include<math.h>

void main(){
    float area, perimeter,r;
    float pi = 3.1416;
    printf("Enter the radius - ");
    scanf("%f", &r);
    area = pi*pow(r,2);
    perimeter = 2*pi*r;
    printf("\nEnter the circle's area - %.2f",area);
    printf("\nEnter the perimeter's area - %.2f",perimeter);
return 0;

}


