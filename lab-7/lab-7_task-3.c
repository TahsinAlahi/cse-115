#include<stdio.h>
void main(){
    int n=4, num1=0,num2=1;
    printf("Enter the end of fibonacci: ");
    scanf("%d", &n);
    printf("%d + %d",num1, num2);
    for(int i=0; i<=n; i++){
        int curr = num1+num2;
        printf(" + %d", curr);
        num1 = num2;
        num2 = curr;
    }
}
