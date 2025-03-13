#include<stdio.h>
void main(){
    int last_num = 5;
    int num3,num2,num1;
    int temp;
    printf("%d + %d", num1, num2);
    for(int i = 1; i <= 5; i++){
        printf("%d + %d", num1, num2);
        if(i == 5) continue;
        printf(" + ");
    }
}
