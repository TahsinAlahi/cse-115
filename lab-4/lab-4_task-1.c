#include<stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num%7==0 && num%3!=0){
        printf("\nThis number is Divisible by 7 but not 3");
    }else{
        printf("\nThis number is not divisible by 7 or divisible by 3");
    }

    return 0;
}
