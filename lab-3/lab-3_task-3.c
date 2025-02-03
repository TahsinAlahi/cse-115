#include<stdio.h>
void main(){
    int num, sum;
    printf("Enter a enter a five digit number: ");
    scanf("%d", &num);
    sum = (num/10000) + (num%10);
    printf("\nThe sum of first and last digit is: %d", sum);
    return 0;
}
