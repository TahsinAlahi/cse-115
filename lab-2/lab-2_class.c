#include<stdio.h>

void main(){
    int num1,num2,num3,num4,num5;
    printf("Enter 5 numbers-");
    scanf("%d %d %d %d %d", &num1,&num2,&num3,&num4,&num5);

    float avg=(num1+num2+num3+num4+num5)/5;
    printf("The average is %0.2f",avg);

    return 0;
}
