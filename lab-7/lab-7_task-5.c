#include<stdio.h>
void main(){
    int num1, num2,low, GCD=0;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num1>num2) low=num2;
    else low=num1;
    for(int i = 2; i <= low; i++){
        if(num1%i == 0 && num2%i == 0 && GCD < i) GCD = i;
    }

    printf("The GCD is: %d", GCD);
}
