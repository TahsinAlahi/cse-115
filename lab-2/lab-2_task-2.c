#include<stdio.h>
#include<math.h>

void main(){
float a,b,c,area;

printf("Enter Base - ");
scanf("%f", &a);

printf("\nEnter hypotenuse - ");
scanf("%f", &b);

c = sqrt(pow(b,2)- pow(a,2));
area = (a*c)/2;
printf("\nHeight is %.2f",c);
printf("\nThe area is %.2f",area);
return 0;


}
