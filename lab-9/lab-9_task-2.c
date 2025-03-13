#include<stdio.h>
int fibonacci(int num){
    int prev1 = 0;
    int prev2 = 1;
    for(int i=2; i<num; i++){
        int temp = prev2;
        prev2 = prev1+prev2;
        prev1 = temp;
    }
    return prev2;
}

void main(){
    int n;
    printf("Enter the limit of fiboncci: ");
    scanf("%d", &n);
    printf("The %dth fibonacci number is: %d", n, fibonacci(n));
}
