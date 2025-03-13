#include<stdio.h>
void main(){
    int num,pro = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num>0){
        pro *= (num % 10);
        num /= 10;
    }
    printf("The sum is: %d", pro);

    return 0;
}
